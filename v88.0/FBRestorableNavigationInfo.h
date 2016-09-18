/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface FBRestorableNavigationInfo : FBValueObject <NSCopying, NSCoding> {

	double _timestamp;
	unsigned long long _viewControllerPresentationMethod;
	unsigned long long _viewControllerPresentationOptions;

}

@property (nonatomic,readonly) double timestamp;                                                  //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) unsigned long long viewControllerPresentationMethod;               //@synthesize viewControllerPresentationMethod=_viewControllerPresentationMethod - In the implementation block
@property (nonatomic,readonly) unsigned long long viewControllerPresentationOptions;              //@synthesize viewControllerPresentationOptions=_viewControllerPresentationOptions - In the implementation block
-(unsigned long long)viewControllerPresentationMethod;
-(unsigned long long)viewControllerPresentationOptions;
-(id)initWithTimestamp:(double)arg1 viewControllerPresentationMethod:(unsigned long long)arg2 viewControllerPresentationOptions:(unsigned long long)arg3 ;
-(double)timestamp;
@end

