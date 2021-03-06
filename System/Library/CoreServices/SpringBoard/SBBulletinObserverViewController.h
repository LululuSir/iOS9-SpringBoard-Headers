//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBNCColumnViewController.h"

#import "BBObserverDelegate.h"

@class BBObserver, BSSerializedRequestQueue, NSArray, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface SBBulletinObserverViewController : SBNCColumnViewController <BBObserverDelegate>
{
    BBObserver *_observer;
    unsigned long long _feed;
    BSSerializedRequestQueue *_sectionRequestQueue;
    BSSerializedRequestQueue *_bulletinRequestQueue;
    NSMutableDictionary *_enabledSectionInfosByID;
    NSMutableArray *_visibleSectionIDs;
    NSMutableDictionary *_bulletinIDsByFeed;
    long long _sectionOrderRule;
    NSArray *_sectionOrder;
    NSMutableArray *_makeshiftSectionOrder;
    NSObject<OS_dispatch_queue> *_handlingControlQueue;
    long long _bulletinHandlingDisabledCount;
    long long _sectionHandlingDisabledCount;
    struct {
        unsigned int isRePushingUpdates:1;
    } _bulletinObserverViewControllerFlags;
}

- (void)observer:(id)arg1 noteServerConnectionStateChanged:(_Bool)arg2;
- (void)observer:(id)arg1 noteInvalidatedBulletinIDs:(id)arg2;
- (struct CGSize)observer:(id)arg1 composedAttachmentSizeForType:(long long)arg2 thumbnailWidth:(float)arg3 height:(float)arg4 key:(id)arg5;
- (id)observer:(id)arg1 composedAttachmentImageForType:(long long)arg2 thumbnailData:(id)arg3 key:(id)arg4;
- (id)observer:(id)arg1 thumbnailSizeConstraintsForAttachmentType:(long long)arg2;
- (_Bool)observerShouldFetchAttachmentSizeBeforeBulletinDelivery:(id)arg1;
- (_Bool)observerShouldFetchAttachmentImageBeforeBulletinDelivery:(id)arg1;
- (void)observer:(id)arg1 noteSectionParametersChanged:(id)arg2 forSectionID:(id)arg3;
- (void)observer:(id)arg1 updateSectionInfo:(id)arg2;
- (void)observer:(id)arg1 updateSectionOrder:(id)arg2;
- (void)observer:(id)arg1 updateSectionOrderRule:(long long)arg2;
- (void)observer:(id)arg1 removeBulletin:(id)arg2;
- (void)observer:(id)arg1 modifyBulletin:(id)arg2 forFeed:(unsigned long long)arg3;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3;
- (void)_teardownRequestQueues;
- (void)_teardownRequestQueue:(id *)arg1;
- (void)_enqueueBulletinRequest:(CDUnknownBlockType)arg1 forBulletinInfo:(id)arg2;
- (void)_setupRequestQueues;
- (void)_setupQueue:(id *)arg1 withLabel:(const char *)arg2;
- (void)_updateSection:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_setSectionOrder:(id)arg1 andSortSections:(_Bool)arg2;
- (void)_setSectionOrderRule:(long long)arg1;
- (void)_sortAndCommitReloadOfSections;
- (void)sortVisibleSections;
- (void)clearSection:(id)arg1;
- (void)removeAndDisableSection:(id)arg1;
- (void)removeSection:(id)arg1;
- (void)_addSection:(id)arg1;
- (void)_setSection:(id)arg1 enabled:(_Bool)arg2;
- (void)_loadSection:(id)arg1;
- (void)_insertSectionIfNecessary:(id)arg1 commit:(_Bool)arg2;
- (void)_updateMakeshiftSectionOrderIfNecessary:(id)arg1;
- (id)_bulletinAfterBulletin:(id)arg1 inSection:(id)arg2;
- (id)firstSection;
- (id)sectionAfterSection:(id)arg1;
- (id)sectionWithIdentifier:(id)arg1;
- (id)_enabledSectionWithIdentifier:(id)arg1;
- (unsigned long long)indexOfSectionWithIdentifier:(id)arg1;
- (id)_sectionIdentifierAtIndex:(unsigned long long)arg1;
- (unsigned long long)_numberOfVisibleSections;
- (unsigned long long)_indexOfBulletin:(id)arg1 inSection:(id)arg2;
- (id)_bulletinWithIdentifier:(id)arg1 inSection:(id)arg2;
- (id)_bulletinAtIndex:(unsigned long long)arg1 inSection:(id)arg2;
- (unsigned long long)_numberOfBulletinsInSection:(id)arg1;
- (void)_replaceBulletin:(id)arg1 inSection:(id)arg2;
- (void)_removeBulletin:(id)arg1 fromSection:(id)arg2;
- (void)_addBulletin:(id)arg1 toSection:(id)arg2 forFeed:(unsigned long long)arg3;
- (void)_setSection:(id)arg1 visible:(_Bool)arg2;
- (_Bool)_isSectionVisible:(id)arg1;
- (_Bool)_isBulletin:(id)arg1 associatedWithSection:(id)arg2;
- (_Bool)_isBulletin:(id)arg1 associatedWithSection:(id)arg2 forFeed:(unsigned long long)arg3;
- (void)_disassociateBulletin:(id)arg1 fromSection:(id)arg2;
- (void)willDisassociateBulletin:(id)arg1 fromSection:(id)arg2;
- (id)_reassociateBulletin:(id)arg1 withSection:(id)arg2;
- (void)_associateBulletin:(id)arg1 withSection:(id)arg2 forFeed:(unsigned long long)arg3;
- (void)didAssociateBulletin:(id)arg1 withSection:(id)arg2 forFeed:(unsigned long long)arg3;
- (void)willAssociateBulletin:(id)arg1 withSection:(id)arg2 forFeed:(unsigned long long)arg3;
- (unsigned long long)_feedsForBulletinID:(id)arg1;
- (void)_removeBulletinIDFromAllFeeds:(id)arg1;
- (void)_addBulletinID:(id)arg1 toSetForFeeds:(unsigned long long)arg2;
- (void)_addBulletinID:(id)arg1 toSetForFeed:(unsigned long long)arg2;
- (id)infoForSection:(id)arg1;
- (id)infoForBulletinSection:(id)arg1;
- (id)infoForBulletin:(id)arg1 inSection:(id)arg2 forFeed:(unsigned long long)arg3;
- (void)pushUpdatesAgainForFeeds:(unsigned long long)arg1;
- (void)pushUpdatesAgainForSectionWithIdentifier:(id)arg1 feeds:(unsigned long long)arg2;
- (_Bool)isRePushingUpdates;
- (void)updateSection:(id)arg1 withParameters:(id)arg2;
- (void)updateSection:(id)arg1 withInfo:(id)arg2;
- (void)commitReplacementWithBulletin:(id)arg1 ofBulletin:(id)arg2 inSection:(id)arg3;
- (void)commitRemovalOfBulletin:(id)arg1 fromSection:(id)arg2;
- (void)commitInsertionOfBulletin:(id)arg1 beforeBulletin:(id)arg2 inSection:(id)arg3 forFeed:(unsigned long long)arg4;
- (void)commitReorderOfSections:(id)arg1;
- (void)commitReplacementWithSection:(id)arg1 ofSection:(id)arg2;
- (void)commitMoveOfSection:(id)arg1 beforeSection:(id)arg2;
- (void)commitRemovalOfSection:(id)arg1;
- (void)commitInsertionOfSection:(id)arg1 beforeSection:(id)arg2;
- (_Bool)notificationCenterTableViewController:(id)arg1 didSelectAction:(id)arg2 forRow:(id)arg3 inSection:(id)arg4;
- (_Bool)notificationCenterTableViewController:(id)arg1 didSelectRow:(id)arg2 inSection:(id)arg3;
- (_Bool)notificationCenterTableViewController:(id)arg1 shouldHighlightRow:(id)arg2 inSection:(id)arg3;
- (long long)sectionOrderRule;
- (void)setRequestHandlingEnabled:(_Bool)arg1;
- (_Bool)isRequestHandlingEnabled;
- (void)_handlingQueue_setSectionHandlingEnabled:(_Bool)arg1;
- (void)setSectionHandlingEnabled:(_Bool)arg1;
- (_Bool)isSectionHandlingEnabled;
- (void)_handlingQueue_setBulletinHandlingEnabled:(_Bool)arg1;
- (void)setBulletinHandlingEnabled:(_Bool)arg1;
- (_Bool)isBulletinHandlingEnabled;
- (id)observer;
- (void)dealloc;
- (id)initWithObserverFeed:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

