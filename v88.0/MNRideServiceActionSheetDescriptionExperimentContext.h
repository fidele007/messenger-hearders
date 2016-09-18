/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@class NSString;

@interface MNRideServiceActionSheetDescriptionExperimentContext : FBExperimentContext {

	BOOL _shouldDisplayDescription;
	NSString* _actionSheetTitle;
	double _fontSize;

}

@property (nonatomic,readonly) BOOL shouldDisplayDescription;                 //@synthesize shouldDisplayDescription=_shouldDisplayDescription - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionSheetTitle;              //@synthesize actionSheetTitle=_actionSheetTitle - In the implementation block
@property (nonatomic,readonly) double fontSize;                               //@synthesize fontSize=_fontSize - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(NSString *)actionSheetTitle;
-(BOOL)shouldDisplayDescription;
-(double)fontSize;
@end

