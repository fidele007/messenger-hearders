/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSError;

@interface MNMessageDetectedDataHandlingResult : FBValueObject <NSCopying> {

	BOOL _isCanceled;
	NSError* _error;

}

@property (nonatomic,readonly) BOOL isCanceled;                   //@synthesize isCanceled=_isCanceled - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
-(id)initWithIsCanceled:(BOOL)arg1 error:(id)arg2 ;
-(BOOL)isCanceled;
-(NSError *)error;
@end

