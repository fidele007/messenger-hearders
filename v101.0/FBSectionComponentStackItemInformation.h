/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBSectionComponent;

@interface FBSectionComponentStackItemInformation : NSObject {

	FBSectionComponent* _component;
	long long _itemOffset;

}

@property (nonatomic,readonly) FBSectionComponent * component;              //@synthesize component=_component - In the implementation block
@property (nonatomic,readonly) long long itemOffset;                        //@synthesize itemOffset=_itemOffset - In the implementation block
-(id)initWithComponent:(id)arg1 itemOffset:(long long)arg2 ;
-(long long)itemOffset;
-(FBSectionComponent *)component;
@end

