/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBStreamingCachedImage, NSError;

@interface FBStreamingCachedImageOrError : NSObject {

	FBStreamingCachedImage* _value;
	NSError* _error;

}

@property (nonatomic,readonly) FBStreamingCachedImage * value;              //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSError * error;                             //@synthesize error=_error - In the implementation block
+(id)newWithError:(id)arg1 ;
+(id)newWithValue:(id)arg1 orError:(id)arg2 ;
+(id)newWithValue:(id)arg1 ;
-(FBStreamingCachedImage *)value;
-(NSError *)error;
@end

