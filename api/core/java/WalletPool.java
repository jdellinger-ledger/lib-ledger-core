// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet_pool.djinni

package co.ledger.core;

import java.util.Date;
import java.util.concurrent.atomic.AtomicBoolean;

/**Class respresenting a pool of wallets */
public abstract class WalletPool {
    /**
     *Return used logger to dump logs in defined log path by PathResolver
     *@return Logger object
     */
    public abstract Logger getLogger();

    /**
     *Return name given to wallet pool
     *@return string
     */
    public abstract String getName();

    /**
     *Return preferences of wallet pool (deduced from configuration)
     *@return Preferences object
     */
    public abstract Preferences getPreferences();

    /**
     *Return number of wallets instanciated under wallet pool
     *@param callback, Callback object returns a 32 bits integer, count of wallets
     */
    public abstract void getWalletCount(I32Callback callback);

    /**
     *Get instanciated wallets having index in a given range
     *@param from, 32 bits integer, lower bound of indices to pick
     *@param to, 32 bits integer, upper bound of indices to pick
     *@param callback, ListCallback object returns a list of Wallet objects
     */
    public abstract void getWallets(int from, int size, WalletListCallback callback);

    /**
     *Get wallet with a giver name
     *@param name, string, name of wallet to look for
     *@param callback, Callback object returns a Wallet object
     */
    public abstract void getWallet(String name, WalletCallback callback);

    /**
     *Instanciate a new wallet under wallet pool
     *@param name, string, name of newly created wallet
     *@param currency, Currency object, currency of the wallet
     *@param configuration, DynamicObject object, configuration of wallet (preferences)
     *@param callback, Callback object returning a Wallet object
     */
    public abstract void createWallet(String name, Currency currency, DynamicObject configuration, WalletCallback callback);

    /**
     *Return all supported currencies by wallet pool, at least one wallet support one of returned currencies
     *@param callback, ListCallback object, returns a list of Currency objects
     */
    public abstract void getCurrencies(CurrencyListCallback callback);

    /**
     *Return currency of a specific wallet
     *@param name, wallet's name to look for
     *@param callback, Callback object returning a Currency object
     */
    public abstract void getCurrency(String name, CurrencyCallback callback);

    /**
     *Return last block of blockchain of a given currency (if it is supported by the wallet pool)
     *@param name, string, name of currency we are interested into getting it's blockchain's last block
     *@param callback, Callback object returns a Block object
     */
    public abstract void getLastBlock(String currencyName, BlockCallback callback);

    /**
     *Get event bus (handler) through which wallet pool observe and gets notified (explorers, DBs ...)
     *@param EventBus object
     */
    public abstract EventBus getEventBus();

    /**
     *Erase data (in user's DB) relative to wallet since given date
     *@param date, start date of data deletion
     */
    public abstract void eraseDataSince(Date date, ErrorCodeCallback callback);

    /**
     *Create a new instance of WalletPool object
     *@param name, string, name of the wallet pool
     *@param password, optional string, password to lock wallet pool
     *@param http, HttpClient object, http client used for all calls made by wallet pool (and aggregated wallets)
     *@param webSocketClient, WebSocketClient object, socket through which wallet pool observe and get notified (explorer, DBs ...)
     *@param pathResolver, PathResolver Object, resolve paths to logs, databases, preferences ...
     *@param logPrinter, LogPrinter object, used to dump/log for debug purpose
     *@param dispatcher, ThreadDispatcher object, responsable of dispatching task through available threads
     *@param rng, RandomNumberGenerator object, needed for generating random numbers (for seeds, salts ...)
     *@param backend, DatabseBackend object, DB in which wallet pool store all required infos (created wallets, their options, their accounts ...)
     *@param configuration, DynamicObject object, desired configuration for this wallet pool
     *@return WalletPool object, instance of WalletPool
     */
    public static native WalletPool newInstance(String name, String password, HttpClient httpClient, WebSocketClient webSocketClient, PathResolver pathResolver, LogPrinter logPrinter, ThreadDispatcher dispatcher, RandomNumberGenerator rng, DatabaseBackend backend, DynamicObject configuration);

    private static final class CppProxy extends WalletPool
    {
        private final long nativeRef;
        private final AtomicBoolean destroyed = new AtomicBoolean(false);

        private CppProxy(long nativeRef)
        {
            if (nativeRef == 0) throw new RuntimeException("nativeRef is zero");
            this.nativeRef = nativeRef;
        }

        private native void nativeDestroy(long nativeRef);
        public void destroy()
        {
            boolean destroyed = this.destroyed.getAndSet(true);
            if (!destroyed) nativeDestroy(this.nativeRef);
        }
        protected void finalize() throws java.lang.Throwable
        {
            destroy();
            super.finalize();
        }

        @Override
        public Logger getLogger()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getLogger(this.nativeRef);
        }
        private native Logger native_getLogger(long _nativeRef);

        @Override
        public String getName()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getName(this.nativeRef);
        }
        private native String native_getName(long _nativeRef);

        @Override
        public Preferences getPreferences()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getPreferences(this.nativeRef);
        }
        private native Preferences native_getPreferences(long _nativeRef);

        @Override
        public void getWalletCount(I32Callback callback)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_getWalletCount(this.nativeRef, callback);
        }
        private native void native_getWalletCount(long _nativeRef, I32Callback callback);

        @Override
        public void getWallets(int from, int size, WalletListCallback callback)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_getWallets(this.nativeRef, from, size, callback);
        }
        private native void native_getWallets(long _nativeRef, int from, int size, WalletListCallback callback);

        @Override
        public void getWallet(String name, WalletCallback callback)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_getWallet(this.nativeRef, name, callback);
        }
        private native void native_getWallet(long _nativeRef, String name, WalletCallback callback);

        @Override
        public void createWallet(String name, Currency currency, DynamicObject configuration, WalletCallback callback)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_createWallet(this.nativeRef, name, currency, configuration, callback);
        }
        private native void native_createWallet(long _nativeRef, String name, Currency currency, DynamicObject configuration, WalletCallback callback);

        @Override
        public void getCurrencies(CurrencyListCallback callback)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_getCurrencies(this.nativeRef, callback);
        }
        private native void native_getCurrencies(long _nativeRef, CurrencyListCallback callback);

        @Override
        public void getCurrency(String name, CurrencyCallback callback)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_getCurrency(this.nativeRef, name, callback);
        }
        private native void native_getCurrency(long _nativeRef, String name, CurrencyCallback callback);

        @Override
        public void getLastBlock(String currencyName, BlockCallback callback)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_getLastBlock(this.nativeRef, currencyName, callback);
        }
        private native void native_getLastBlock(long _nativeRef, String currencyName, BlockCallback callback);

        @Override
        public EventBus getEventBus()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getEventBus(this.nativeRef);
        }
        private native EventBus native_getEventBus(long _nativeRef);

        @Override
        public void eraseDataSince(Date date, ErrorCodeCallback callback)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_eraseDataSince(this.nativeRef, date, callback);
        }
        private native void native_eraseDataSince(long _nativeRef, Date date, ErrorCodeCallback callback);
    }
}
