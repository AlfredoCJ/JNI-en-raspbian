public class JavaJni {
	static {
		System.loadLibrary("Jni");
	}
	private native String getTexto(int i);

	public String getString(int i) {
		return getTexto(i);
	}

	public static void main(String[] args) {
		JavaJni jni = new JavaJni();
		System.out.println(jni.getString(0));
		System.out.println(jni.getString(1));
		System.out.println(jni.getString(5));
	}
}

