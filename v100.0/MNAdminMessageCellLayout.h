/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBClassProvidable.h>

@class MNAdminMessageContentExtractor, FBMobileConfigContextManager, NSString;

@interface MNAdminMessageCellLayout : NSObject <FBClassProvidable> {

	MNAdminMessageContentExtractor* _contentExtractor;
	FBMobileConfigContextManager* _configManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(double)heightForMessageRow:(id)arg1 tableWidth:(double)arg2 ;
-(id)initWithAdminMessageContentExtractor:(id)arg1 configManager:(id)arg2 ;
-(MNAdminMessageCellLayoutInfo)getLayoutForMessageRow:(id)arg1 tableWidth:(double)arg2 ;
-(CGRect)_labelFrameForText:(id)arg1 tableWidth:(double)arg2 ;
-(double)_heightForAttributedString:(id)arg1 maxWidth:(double)arg2 ;
@end

