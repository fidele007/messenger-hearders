/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMProfileURLUtils.h>

@class NSString;

@interface FBMProfileURLGenerator : NSObject <FBMProfileURLUtils>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isFBAppInstalled;
+(id)personMobileWebURLWithUID:(id)arg1 ;
+(id)pageMobileWebURLWithUID:(id)arg1 ;
+(BOOL)isFBGroupsAppInstalled;
+(id)personDesktopWebURLWithUID:(id)arg1 ;
+(id)pageDesktopWebURLWithUID:(id)arg1 ;
+(id)groupDesktopWebURLWithUID:(id)arg1 ;
-(id)personURLForAppOrMSiteWithUID:(id)arg1 ;
-(id)pageURLForAppOrMSiteWithUID:(id)arg1 ;
-(id)groupURLForAppOrMSiteWithUID:(id)arg1 ;
-(id)profileURLForAppOrMSiteWithUID:(id)arg1 identityTypeProperties:(id)arg2 ;
-(id)profileURLForAppOrMSiteWithUID:(id)arg1 identityTypeProperties:(id)arg2 actionType:(unsigned long long)arg3 ;
@end

