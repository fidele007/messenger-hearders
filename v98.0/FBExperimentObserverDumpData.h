/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:08 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface FBExperimentObserverDumpData : NSObject {

	NSString* _universeName;
	NSString* _experimentName;
	NSString* _groupName;
	NSDictionary* _customData;

}

@property (nonatomic,copy) NSString * universeName;                //@synthesize universeName=_universeName - In the implementation block
@property (nonatomic,copy) NSString * experimentName;              //@synthesize experimentName=_experimentName - In the implementation block
@property (nonatomic,copy) NSString * groupName;                   //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,copy) NSDictionary * customData;              //@synthesize customData=_customData - In the implementation block
+(id)_getGroupNameToDump:(id)arg1 ;
+(id)dumpDataFromExperimentName:(id)arg1 groupName:(id)arg2 parameters:(id)arg3 ;
-(NSString *)universeName;
-(NSString *)experimentName;
-(void)setExperimentName:(NSString *)arg1 ;
-(void)setUniverseName:(NSString *)arg1 ;
-(void)setCustomData:(NSDictionary *)arg1 ;
-(NSDictionary *)customData;
-(void)setGroupName:(NSString *)arg1 ;
-(NSString *)groupName;
@end
