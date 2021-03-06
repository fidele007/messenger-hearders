/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/SPAccessPhotoPermissionOptions.h>

@class NSString;

@interface SPMultipickerAccessPhotoPermissionOptions : NSObject <SPAccessPhotoPermissionOptions> {

	int _viewStyle;
	NSString* _descriptionWhenDenied;
	BOOL _onDarkBackground;
	BOOL _isDisplayedCondensed;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)descriptionWhenDenied;
-(id)descriptionWhenUndetermined;
-(BOOL)onDarkBackground;
-(BOOL)isDisplayedCondensed;
-(id)initWithStyle:(int)arg1 descriptionWhenDenied:(id)arg2 onDarkBackground:(BOOL)arg3 isDisplayedCondensed:(BOOL)arg4 ;
-(int)style;
-(id)headerString;
@end

