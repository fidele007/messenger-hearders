/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBMGroupJoinRequest : FBValueObject <NSCoding, NSCopying> {

	NSString* _userId;
	unsigned long long _requestTime;

}

@property (nonatomic,copy,readonly) NSString * userId;                      //@synthesize userId=_userId - In the implementation block
@property (nonatomic,readonly) unsigned long long requestTime;              //@synthesize requestTime=_requestTime - In the implementation block
-(id)initWithUserId:(id)arg1 requestTime:(unsigned long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)requestTime;
-(NSString *)userId;
@end
