/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface FBSettingsSchemaItem : NSObject {

	NSMutableDictionary* _data;
	NSString* _type;
	NSString* _key;

}

@property (nonatomic,readonly) NSMutableDictionary * data;              //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) NSString * type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * key;                              //@synthesize key=_key - In the implementation block
-(id)settingKey;
-(id)settingTitle;
-(int)storeType;
-(id)settingObject;
-(void)setSettingObject:(id)arg1 ;
-(void)objectToUserPreference:(id)arg1 sessionPreference:(id)arg2 userDefaults:(id)arg3 storeExternal:(id)arg4 ;
-(void)objectFromUserPreference:(id)arg1 sessionPreference:(id)arg2 userDefaults:(id)arg3 storeExternal:(id)arg4 ;
-(BOOL)enabled;
-(NSString *)key;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSMutableDictionary *)data;
-(id)initWithData:(id)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(id)settingString;
@end

