package com.example.huanqi.myapplication;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {

    public native String getHelloFromC();
    public native String get_hello_from_c();

    private DataProvider dataProvider = null;
    public void click(View view)
    {
        //Toast.makeText(this,getHelloFromC(),Toast.LENGTH_LONG).show();
        Toast.makeText(this,get_hello_from_c(),Toast.LENGTH_LONG).show();
    }

    public void clickInteger(View view)
    {
        Toast.makeText(this,dataProvider.add(1, 2) + "" ,Toast.LENGTH_LONG).show();
    }

    public void clickString(View view)
    {
        Toast.makeText(this,dataProvider.sayHello("angel~~"),Toast.LENGTH_LONG).show();
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        dataProvider = new DataProvider();
    }

    @Override
    public boolean onCreateOptionsMenu(Menu menu) {
        // Inflate the menu; this adds items to the action bar if it is present.
        getMenuInflater().inflate(R.menu.menu_main, menu);
        return true;
    }

    @Override
    public boolean onOptionsItemSelected(MenuItem item) {
        // Handle action bar item clicks here. The action bar will
        // automatically handle clicks on the Home/Up button, so long
        // as you specify a parent activity in AndroidManifest.xml.
        int id = item.getItemId();

        //noinspection SimplifiableIfStatement
        if (id == R.id.action_settings) {
            return true;
        }

        return super.onOptionsItemSelected(item);
    }
}
