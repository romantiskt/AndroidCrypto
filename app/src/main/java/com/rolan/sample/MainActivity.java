package com.rolan.sample;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.text.TextUtils;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;
import android.widget.Toast;

import com.rolan.crypto.Crypto;

public class MainActivity extends AppCompatActivity implements View.OnClickListener {
    EditText input;
    Button btnEncode,btnDecode;
    TextView tvEncdoe,tvDecode;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        input=findViewById(R.id.et_text);
        btnEncode=findViewById(R.id.btn_encode);
        btnDecode=findViewById(R.id.btn_decode);
        tvEncdoe=findViewById(R.id.tv_encode_content);
        tvDecode=findViewById(R.id.tv_decode_content);
        btnDecode.setOnClickListener(this);
        btnEncode.setOnClickListener(this);
    }

    @Override
    public void onClick(View view) {
        switch (view.getId()){
            case R.id.btn_encode:
                if(TextUtils.isEmpty(input.getText().toString())){
                    Toast.makeText(this,"请先输入加密信息",Toast.LENGTH_SHORT).show();
                    return;
                }
                String encode = Crypto.encode(this, input.getText().toString());
                tvEncdoe.setText(encode);
                break;

            case R.id.btn_decode:
                if(TextUtils.isEmpty(tvEncdoe.getText().toString())){
                    Toast.makeText(this,"请先加密信息",Toast.LENGTH_SHORT).show();
                    return;
                }

                break;
        }
    }
}
