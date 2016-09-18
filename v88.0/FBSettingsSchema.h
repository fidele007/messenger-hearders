/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:55 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSettingsStoreExternal;
@class FBUserSession, NSURL, NSArray;

@interface FBSettingsSchema : NSObject {

	FBUserSession* _session;
	id<FBSettingsStoreExternal> _externalStoreDelegate;
	NSURL* _baseFileURL;
	NSArray* _schemaStore;

}

@property (nonatomic,retain) NSArray * schemaStore;                                                 //@synthesize schemaStore=_schemaStore - In the implementation block
@property (nonatomic,copy,readonly) NSURL * baseFileURL;                                            //@synthesize baseFileURL=_baseFileURL - In the implementation block
@property (assign,nonatomic,__weak) id<FBSettingsStoreExternal> storeExternalDelegate;              //@synthesize externalStoreDelegate=_externalStoreDelegate - In the implementation block
-(id)initWithBaseFileURL:(id)arg1 fileName:(id)arg2 session:(id)arg3 ;
-(void)reloadSettingFromStore;
-(long long)numberOfRowInSection:(unsigned long long)arg1 ;
-(id)titleForFooterInSection:(unsigned long long)arg1 ;
-(id)dataInSection:(unsigned long long)arg1 atRow:(unsigned long long)arg2 ;
-(NSURL *)baseFileURL;
-(id<FBSettingsStoreExternal>)storeExternalDelegate;
-(void)setStoreExternalDelegate:(id<FBSettingsStoreExternal>)arg1 ;
-(void)formatToTableData:(id)arg1 ;
-(void)setSchemaStore:(NSArray *)arg1 ;
-(id)initWithFileFromMainBundle:(id)arg1 session:(id)arg2 ;
-(NSArray *)schemaStore;
-(long long)numberOfSections;
-(id)titleForHeaderInSection:(unsigned long long)arg1 ;
-(void)synchronize:(BOOL)arg1 ;
@end

