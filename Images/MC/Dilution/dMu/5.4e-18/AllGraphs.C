void AllGraphs()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Sep 14 11:03:32 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-416.625,-0.14375,3419.625,0.29375);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t truthAllDecays_fx1001[12] = {
   125,
   375,
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625,
   2875};
   Double_t truthAllDecays_fy1001[12] = {
   0.1603776,
   0.1913471,
   0.1860713,
   0.1872682,
   0.178092,
   0.1664298,
   0.1508531,
   0.1372224,
   0.09940033,
   0.09425763,
   0.05477988,
   0.03200454};
   Double_t truthAllDecays_fex1001[12] = {
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125};
   Double_t truthAllDecays_fey1001[12] = {
   0.04226448,
   0.01693794,
   0.01248891,
   0.01021765,
   0.008794978,
   0.007833457,
   0.007132476,
   0.006622096,
   0.006240851,
   0.005980287,
   0.005847248,
   0.006014701};
   TGraphErrors *gre = new TGraphErrors(12,truthAllDecays_fx1001,truthAllDecays_fy1001,truthAllDecays_fex1001,truthAllDecays_fey1001);
   gre->SetName("truthAllDecays");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;d_{EDM}(p)");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_truthAllDecays1001 = new TH1F("Graph_truthAllDecays1001","",100,0,3300);
   Graph_truthAllDecays1001->SetMinimum(-0.1);
   Graph_truthAllDecays1001->SetMaximum(0.25);
   Graph_truthAllDecays1001->SetDirectory(0);
   Graph_truthAllDecays1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_truthAllDecays1001->SetLineColor(ci);
   Graph_truthAllDecays1001->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_truthAllDecays1001->GetXaxis()->SetRange(0,92);
   Graph_truthAllDecays1001->GetXaxis()->CenterTitle(true);
   Graph_truthAllDecays1001->GetXaxis()->SetLabelFont(42);
   Graph_truthAllDecays1001->GetXaxis()->SetTitleSize(0.04);
   Graph_truthAllDecays1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_truthAllDecays1001->GetXaxis()->SetTitleFont(42);
   Graph_truthAllDecays1001->GetYaxis()->SetTitle("d_{EDM}(p)");
   Graph_truthAllDecays1001->GetYaxis()->CenterTitle(true);
   Graph_truthAllDecays1001->GetYaxis()->SetNdivisions(4000510);
   Graph_truthAllDecays1001->GetYaxis()->SetLabelFont(42);
   Graph_truthAllDecays1001->GetYaxis()->SetTitleSize(0.04);
   Graph_truthAllDecays1001->GetYaxis()->SetTitleOffset(1.15);
   Graph_truthAllDecays1001->GetYaxis()->SetTitleFont(42);
   Graph_truthAllDecays1001->GetZaxis()->SetLabelFont(42);
   Graph_truthAllDecays1001->GetZaxis()->SetTitleOffset(1);
   Graph_truthAllDecays1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_truthAllDecays1001);
   
   gre->Draw("ap");
   
   Double_t truth_fx1002[12] = {
   125,
   375,
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625,
   2875};
   Double_t truth_fy1002[12] = {
   0.1457973,
   0.1517821,
   0.1527185,
   0.1548668,
   0.1527239,
   0.1519242,
   0.1383992,
   0.1245282,
   0.1081231,
   0.08900757,
   0.06681361,
   0.03595676};
   Double_t truth_fex1002[12] = {
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125};
   Double_t truth_fey1002[12] = {
   0.02914221,
   0.01214779,
   0.007944401,
   0.005954145,
   0.004923797,
   0.004277969,
   0.003802672,
   0.003483397,
   0.003270799,
   0.003125044,
   0.003029481,
   0.003115154};
   gre = new TGraphErrors(12,truth_fx1002,truth_fy1002,truth_fex1002,truth_fey1002);
   gre->SetName("truth");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;d_{EDM}(p)");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_truth1002 = new TH1F("Graph_truth1002","",100,0,3300);
   Graph_truth1002->SetMinimum(-0.1);
   Graph_truth1002->SetMaximum(0.25);
   Graph_truth1002->SetDirectory(0);
   Graph_truth1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_truth1002->SetLineColor(ci);
   Graph_truth1002->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_truth1002->GetXaxis()->SetRange(0,92);
   Graph_truth1002->GetXaxis()->SetLabelFont(42);
   Graph_truth1002->GetXaxis()->SetTitleOffset(1);
   Graph_truth1002->GetXaxis()->SetTitleFont(42);
   Graph_truth1002->GetYaxis()->SetTitle("d_{EDM}(p)");
   Graph_truth1002->GetYaxis()->SetLabelFont(42);
   Graph_truth1002->GetYaxis()->SetTitleFont(42);
   Graph_truth1002->GetZaxis()->SetLabelFont(42);
   Graph_truth1002->GetZaxis()->SetTitleOffset(1);
   Graph_truth1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_truth1002);
   
   gre->Draw("p ");
   
   Double_t trackTruth_fx1003[11] = {
   375,
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625,
   2875};
   Double_t trackTruth_fy1003[11] = {
   -0.02567572,
   0.09509227,
   0.07148026,
   0.08233936,
   0.07848344,
   0.09218393,
   0.08046866,
   0.05880107,
   0.0377722,
   0.05774846,
   -0.008504013};
   Double_t trackTruth_fex1003[11] = {
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125};
   Double_t trackTruth_fey1003[11] = {
   0.06369066,
   0.02129351,
   0.01223112,
   0.01003911,
   0.009197576,
   0.00875924,
   0.00877848,
   0.009186698,
   0.009760662,
   0.009691082,
   0.02115107};
   gre = new TGraphErrors(11,trackTruth_fx1003,trackTruth_fy1003,trackTruth_fex1003,trackTruth_fey1003);
   gre->SetName("trackTruth");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;d_{EDM}(p)");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(8);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_trackTruth1003 = new TH1F("Graph_trackTruth1003","",100,0,3275);
   Graph_trackTruth1003->SetMinimum(-0.1);
   Graph_trackTruth1003->SetMaximum(0.25);
   Graph_trackTruth1003->SetDirectory(0);
   Graph_trackTruth1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_trackTruth1003->SetLineColor(ci);
   Graph_trackTruth1003->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_trackTruth1003->GetXaxis()->SetRange(0,92);
   Graph_trackTruth1003->GetXaxis()->SetLabelFont(42);
   Graph_trackTruth1003->GetXaxis()->SetTitleOffset(1);
   Graph_trackTruth1003->GetXaxis()->SetTitleFont(42);
   Graph_trackTruth1003->GetYaxis()->SetTitle("d_{EDM}(p)");
   Graph_trackTruth1003->GetYaxis()->SetLabelFont(42);
   Graph_trackTruth1003->GetYaxis()->SetTitleFont(42);
   Graph_trackTruth1003->GetZaxis()->SetLabelFont(42);
   Graph_trackTruth1003->GetZaxis()->SetTitleOffset(1);
   Graph_trackTruth1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_trackTruth1003);
   
   gre->Draw("p ");
   
   Double_t trackReco_fx1004[11] = {
   375,
   625,
   875,
   1125,
   1375,
   1625,
   1875,
   2125,
   2375,
   2625,
   2875};
   Double_t trackReco_fy1004[11] = {
   -0.01376143,
   0.09264648,
   0.07297922,
   0.08156121,
   0.08076189,
   0.09118542,
   0.07949435,
   0.06144624,
   0.03915688,
   0.05483956,
   -0.008982683};
   Double_t trackReco_fex1004[11] = {
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125,
   125};
   Double_t trackReco_fey1004[11] = {
   0.0636869,
   0.02132924,
   0.01226297,
   0.01007448,
   0.009235815,
   0.008789589,
   0.008812048,
   0.009229503,
   0.009809752,
   0.009732171,
   0.02197126};
   gre = new TGraphErrors(11,trackReco_fx1004,trackReco_fy1004,trackReco_fex1004,trackReco_fey1004);
   gre->SetName("trackReco");
   gre->SetTitle(";p [MeV]: in range p #minus 125 < p < p #plus 125;d_{EDM}(p)");
   gre->SetFillStyle(1000);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_trackReco1004 = new TH1F("Graph_trackReco1004","",100,0,3275);
   Graph_trackReco1004->SetMinimum(-0.1);
   Graph_trackReco1004->SetMaximum(0.25);
   Graph_trackReco1004->SetDirectory(0);
   Graph_trackReco1004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_trackReco1004->SetLineColor(ci);
   Graph_trackReco1004->GetXaxis()->SetTitle("p [MeV]: in range p #minus 125 < p < p #plus 125");
   Graph_trackReco1004->GetXaxis()->SetRange(0,92);
   Graph_trackReco1004->GetXaxis()->SetLabelFont(42);
   Graph_trackReco1004->GetXaxis()->SetTitleOffset(1);
   Graph_trackReco1004->GetXaxis()->SetTitleFont(42);
   Graph_trackReco1004->GetYaxis()->SetTitle("d_{EDM}(p)");
   Graph_trackReco1004->GetYaxis()->SetLabelFont(42);
   Graph_trackReco1004->GetYaxis()->SetTitleFont(42);
   Graph_trackReco1004->GetZaxis()->SetLabelFont(42);
   Graph_trackReco1004->GetZaxis()->SetTitleOffset(1);
   Graph_trackReco1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_trackReco1004);
   
   gre->Draw("p ");
   
   TLegend *leg = new TLegend(0.59,0.69,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("truthAllDecays","All decays","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("truth","Accepted decays","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("trackTruth","Truth vertices","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(8);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("trackReco","Reco vertices","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
