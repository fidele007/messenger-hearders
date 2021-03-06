/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIImage;

@interface MNRoomShareSheetAppViewModel : FBValueObject <NSCopying> {

	NSString* _appName;
	UIImage* _icon;
	UIImage* _iconHighlighted;

}

@property (nonatomic,copy,readonly) NSString * appName;                     //@synthesize appName=_appName - In the implementation block
@property (nonatomic,copy,readonly) UIImage * icon;                         //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy,readonly) UIImage * iconHighlighted;              //@synthesize iconHighlighted=_iconHighlighted - In the implementation block
-(id)initWithAppName:(id)arg1 icon:(id)arg2 iconHighlighted:(id)arg3 ;
-(UIImage *)iconHighlighted;
-(UIImage *)icon;
-(NSString *)appName;
@end

