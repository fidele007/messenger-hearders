/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:04 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBWebImageResponseExpiryEvaluator;
@class FBCache;

@interface FBWebImageCache : NSObject {

	FBCache* _cache;
	id<FBWebImageResponseExpiryEvaluator> _expiryEvaluator;

}
-(id)initWithMaximumPixelsCost:(unsigned long long)arg1 ;
-(id)initWithMaximumPixelsCost:(unsigned long long)arg1 responseExpiryEvaluator:(id)arg2 ;
-(id)responseForSpecifier:(id)arg1 ;
-(void)cacheResponse:(id)arg1 forSpecifier:(id)arg2 ;
@end

