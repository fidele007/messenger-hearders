/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:17 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSData;

@interface Uploader : NSObject {

	NSMutableDictionary* parameters_;
	NSData* minidumpContents_;
	NSData* logFileData_;
	NSMutableDictionary* serverDictionary_;
	NSMutableDictionary* socorroDictionary_;
	NSMutableDictionary* googleDictionary_;
	NSMutableDictionary* extraServerVars_;

}
+(id)readConfigurationDataFromFile:(id)arg1 ;
-(id)initWithConfigFile:(const char*)arg1 ;
-(BOOL)populateServerDictionary:(id)arg1 ;
-(void)handleNetworkResponse:(id)arg1 withError:(id)arg2 ;
-(void)addServerParameter:(id)arg1 forKey:(id)arg2 ;
-(void)uploadData:(id)arg1 name:(id)arg2 ;
-(void)createServerParameterDictionaries;
-(void)translateConfigurationData:(id)arg1 ;
-(BOOL)readMinidumpData;
-(BOOL)readLogFileData;
-(id)dictionaryForServerType:(id)arg1 ;
-(id)urlParameterDictionary;
-(void)logUploadWithID:(const char*)arg1 ;
-(void)dealloc;
-(id)parameters;
-(id)clientID;
-(id)initWithConfig:(id)arg1 ;
-(void)report;
@end
