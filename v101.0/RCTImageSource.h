/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSURLRequest;

@interface RCTImageSource : NSObject {

	BOOL _packagerAsset;
	NSURLRequest* _request;
	double _scale;
	CGSize _size;

}

@property (assign,nonatomic) BOOL packagerAsset;                         //@synthesize packagerAsset=_packagerAsset - In the implementation block
@property (nonatomic,copy,readonly) NSURLRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) CGSize size;                              //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) double scale;                             //@synthesize scale=_scale - In the implementation block
-(BOOL)packagerAsset;
-(id)initWithURLRequest:(id)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
-(void)setPackagerAsset:(BOOL)arg1 ;
-(id)imageSourceWithSize:(CGSize)arg1 scale:(double)arg2 ;
-(CGSize)size;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSURLRequest *)request;
-(double)scale;
@end

