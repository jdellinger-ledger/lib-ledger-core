// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_public_key_provider.djinni

package co.ledger.core;

import java.util.concurrent.atomic.AtomicBoolean;

public abstract class BitcoinPublicKeyCallback {
    public abstract void onPublicKey(BitcoinPublicKey publicKey);

    private static final class CppProxy extends BitcoinPublicKeyCallback
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
        public void onPublicKey(BitcoinPublicKey publicKey)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_onPublicKey(this.nativeRef, publicKey);
        }
        private native void native_onPublicKey(long _nativeRef, BitcoinPublicKey publicKey);
    }
}
