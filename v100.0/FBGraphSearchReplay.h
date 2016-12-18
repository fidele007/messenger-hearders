/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSNumber, NSString;

@interface FBGraphSearchReplay : FBGraphQLInput {

	NSNumber* _recordId;
	NSString* _replayMode;

}

@property (nonatomic,copy) NSNumber * recordId;                //@synthesize recordId=_recordId - In the implementation block
@property (nonatomic,copy) NSString * replayMode;              //@synthesize replayMode=_replayMode - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)replayMode;
-(void)setReplayMode:(NSString *)arg1 ;
-(void)setRecordId:(NSNumber *)arg1 ;
-(NSNumber *)recordId;
@end
