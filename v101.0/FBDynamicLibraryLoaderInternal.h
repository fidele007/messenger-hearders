/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBQuickPerformanceLoggerProtocol;
@interface FBDynamicLibraryLoaderInternal : NSObject {

	id<FBQuickPerformanceLoggerProtocol> _qplogger;
	/*^block*/id _dynamicLoadErrorBlock;
	double _startupTime;

}
-(id)initWithQpl:(id)arg1 startupTime:(double)arg2 errorBlock:(/*^block*/id)arg3 ;
-(void)logErrorMessage:(id)arg1 dynamicLibrary:(unsigned long long)arg2 symbolName:(const char*)arg3 ;
-(void)logStartDynamicLoad:(unsigned long long)arg1 dynamicLibraryPath:(const char*)arg2 symbolName:(const char*)arg3 ;
-(void)logStopDynamicLoadSuccess:(unsigned long long)arg1 ;
-(void)logStopDynamicLoadFail:(unsigned long long)arg1 ;
@end
