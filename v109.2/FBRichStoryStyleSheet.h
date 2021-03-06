/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:41 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class FBRichStoryStyleDataStore, UIColor;

@interface FBRichStoryStyleSheet : NSObject <NSCopying, NSMutableCopying> {

	FBRichStoryStyleDataStore* _dataStore;

}

@property (nonatomic,readonly) UIColor * documentBackgroundColor; 
-(id)fontResources;
-(id)textStyleForAttribute:(id)arg1 ;
-(UIColor *)documentBackgroundColor;
-(void)enumerateAttributesAndTextStylesUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)requiresExternalResources;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)layoutDirection;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithDataStore:(id)arg1 ;
-(id)dataStore;
@end

