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

@interface FBMQTTPresenceAccuracyRequest : NSObject <TBase, NSCoding> {

	NSString* __thrift_caller;
	BOOL __thrift_caller_set;

}

@property (nonatomic,retain) NSString * caller; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(id)initWithCaller:(id)arg1 ;
-(BOOL)callerIsSet;
-(void)unsetCaller;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setCaller:(NSString *)arg1 ;
-(void)write:(id)arg1 ;
-(NSString *)caller;
@end

