/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:25 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMobileConfigDebugQEViewControllerDelegate <NSObject>
@required
-(void)overrideGroup:(const FBMobileConfigQEGroupInfo*)arg1 universe:(const FBMobileConfigQEUniverseInfo*)arg2;
-(void)removeOverrideForUniverse:(FBMobileConfigQEUniverseInfo*)arg1;
-(id)getParamName:(FBMobileConfigQEParamInfo*)arg1;
-(void)populateActualParamValuesWithGroup:(const FBMobileConfigQEGroupInfo*)arg1 actualParams:(vector<mobileconfig::FBMobileConfigQEParamInfo, std::__1::allocator<mobileconfig::FBMobileConfigQEParamInfo> >*)arg2;

@end
