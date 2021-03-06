/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBWebImageSpecifier.h>

@protocol FBWebImageSpecifier, FBImageFilter;
@class NSString;

@interface FBWebImageFilterSpecifier : NSObject <FBWebImageSpecifier> {

	long long _filterMode;
	id<FBWebImageSpecifier> _imageSpecifier;
	id<FBImageFilter> _filter;

}

@property (nonatomic,readonly) id<FBWebImageSpecifier> imageSpecifier;              //@synthesize imageSpecifier=_imageSpecifier - In the implementation block
@property (nonatomic,readonly) id<FBImageFilter> filter;                            //@synthesize filter=_filter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)type;
-(id<FBWebImageSpecifier>)imageSpecifier;
-(id)logicalIdentifier;
-(id)initWithImageSpecifier:(id)arg1 filter:(id)arg2 ;
-(id)initWithImageSpecifier:(id)arg1 filter:(id)arg2 filterMode:(long long)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copy;
-(id<FBImageFilter>)filter;
-(long long)filterMode;
@end

