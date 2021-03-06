/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:02 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBMQTTSubscribeGenericTopic : NSObject <TBase, NSCoding> {

	NSString* __thrift_topicName;
	int __thrift_qualityOfService;
	BOOL __thrift_topicName_set;
	BOOL __thrift_qualityOfService_set;

}

@property (nonatomic,retain) NSString * topicName; 
@property (assign,nonatomic) int qualityOfService; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(void)setTopicName:(NSString *)arg1 ;
-(id)initWithTopicName:(id)arg1 qualityOfService:(int)arg2 ;
-(BOOL)topicNameIsSet;
-(void)unsetTopicName;
-(BOOL)qualityOfServiceIsSet;
-(void)unsetQualityOfService;
-(NSString *)topicName;
-(int)qualityOfService;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setQualityOfService:(int)arg1 ;
-(void)write:(id)arg1 ;
@end

