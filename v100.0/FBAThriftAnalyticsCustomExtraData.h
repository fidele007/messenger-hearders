/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/TBaseStruct.h>
#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableDictionary, NSString;

@interface FBAThriftAnalyticsCustomExtraData : TBaseStruct <TBase, NSCoding> {

	NSMutableDictionary* __thrift_eventExtra;
	BOOL __thrift_eventExtra_set;

}

@property (nonatomic,retain) NSMutableDictionary * eventExtra; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(void)setEventExtra:(NSMutableDictionary *)arg1 ;
-(id)initWithEventExtra:(NSMutableDictionary*)arg1 ;
-(NSMutableDictionary *)eventExtra;
-(BOOL)eventExtraIsSet;
-(void)unsetEventExtra;
-(id)toDict;
-(BOOL)makeImmutable;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)validate;
-(void)write:(id)arg1 ;
@end
