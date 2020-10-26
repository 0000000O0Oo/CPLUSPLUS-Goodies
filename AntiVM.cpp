void antiVirtualBox(){
    if(fileExists("C:\\Windows\\System32\\Drivers\\VBoxMouse.sys")){
        exit(EXIT_FAILURE);
    }
    else if(fileExists("C:\\windows\\System32\\Drivers\\VBoxGuest.sys")) exit(EXIT_FAILURE);
	else if(fileExists("C:\\windows\\System32\\Drivers\\VBoxSF.sys")) exit(EXIT_FAILURE);
	else if(fileExists("C:\\windows\\System32\\Drivers\\VBoxVideo.sys")) exit(EXIT_FAILURE);
	else if(fileExists("C:\\windows\\System32\\vboxdisp.dll")) exit(EXIT_FAILURE);
	else if(fileExists("C:\\windows\\System32\\vboxhook.dll")) exit(EXIT_FAILURE);
	else if(fileExists("C:\\windows\\System32\\vboxmrxnp.dll")) exit(EXIT_FAILURE);
	else if(fileExists("C:\\windows\\System32\\vboxogl.dll")) exit(EXIT_FAILURE);
	else if(fileExists("C:\\windows\\System32\\vboxoglarrayspu.dll")) exit(EXIT_FAILURE);
	else if(fileExists("C:\\windows\\System32\\vboxoglcrutil.dll")) exit(EXIT_FAILURE);
	else if(fileExists("C:\\windows\\System32\\vboxoglerrorspu.dll")) exit(EXIT_FAILURE);
	else if(fileExists("C:\\windows\\System32\\vboxoglfeedbackspu.dll")) exit(EXIT_FAILURE);
	else if(fileExists("C:\\windows\\System32\\vboxoglpackspu.dll")) exit(EXIT_FAILURE);
	else if(fileExists("C:\\windows\\System32\\vboxoglpassthroughspu.dll")) exit(EXIT_FAILURE);
}

void antiVmware(){
	if(fileExists("C:\\windows\\System32\\Drivers\\Vmmouse.sys")){
		exit(EXIT_FAILURE);
	}
	else if(fileExists("C:\\windows\\System32\\Drivers\\vm3dgl.dll")){
		exit(EXIT_FAILURE);
	}
	else if(fileExists("C:\\windows\\System32\\Drivers\\vmdum.dll")){
		exit(EXIT_FAILURE);
	}
	else if(fileExists("C:\\windows\\System32\\Drivers\\vm3dver.dll")){
		exit(EXIT_FAILURE);
	}
	else if(fileExists("C:\\windows\\System32\\Drivers\\vmtray.dll")){
		exit(EXIT_FAILURE);
	}
	else if(fileExists("C:\\windows\\System32\\Drivers\\VMToolsHook.dll")){
		exit(EXIT_FAILURE);
	}
	else if(fileExists("C:\\windows\\System32\\Drivers\\vmmousever.dll")){
		exit(EXIT_FAILURE);
	}
	else if(fileExists("C:\\windows\\System32\\Drivers\\vmhgfs.dll")){
		exit(EXIT_FAILURE);
	}
	else if(fileExists("C:\\windows\\System32\\Drivers\\vmGuestLib.dll")){
		exit(EXIT_FAILURE);
	}
	else if(fileExists("C:\\windows\\System32\\Drivers\\VmGuestLibJava.dll")){
		exit(EXIT_FAILURE);
	}
	else if(fileExists("C:\\windows\\System32\\Driversvmhgfs.dll")){
		exit(EXIT_FAILURE);
	}
}
