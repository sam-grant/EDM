void S18_simple_A_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May 13 01:18:31 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-412.5,-2.978693,3712.5,0.9625254);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1198[15] = {
   100,
   300,
   500,
   700,
   900,
   1100,
   1300,
   1500,
   1700,
   1900,
   2100,
   2300,
   2500,
   2700,
   2900};
   Double_t Graph0_fy1198[15] = {
   -1.008084,
   -0.1393759,
   0.1469283,
   0.05772316,
   0.2247036,
   0.131663,
   0.1595009,
   0.1674012,
   0.2146128,
   0.1343876,
   0.07367706,
   0.1997199,
   0.1312581,
   0.05356802,
   -0.008596107};
   Double_t Graph0_fex1198[15] = {
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100,
   100};
   Double_t Graph0_fey1198[15] = {
   1.313739,
   0.2362011,
   0.07913982,
   0.06127803,
   0.05415041,
   0.05016563,
   0.04693776,
   0.04458903,
   0.04338056,
   0.043525,
   0.04518271,
   0.04864908,
   0.05168938,
   0.05252769,
   0.07227228};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1198,Graph0_fy1198,Graph0_fex1198,Graph0_fey1198);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01198 = new TH1F("Graph_Graph01198","S18",100,0,3300);
   Graph_Graph01198->SetMinimum(-2.584571);
   Graph_Graph01198->SetMaximum(0.5684036);
   Graph_Graph01198->SetDirectory(0);
   Graph_Graph01198->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01198->SetLineColor(ci);
   Graph_Graph01198->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01198->GetXaxis()->CenterTitle(true);
   Graph_Graph01198->GetXaxis()->SetLabelFont(42);
   Graph_Graph01198->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01198->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01198->GetXaxis()->SetTitleFont(42);
   Graph_Graph01198->GetYaxis()->SetTitle("A_{Bz} [mrad]");
   Graph_Graph01198->GetYaxis()->CenterTitle(true);
   Graph_Graph01198->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01198->GetYaxis()->SetLabelFont(42);
   Graph_Graph01198->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01198->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01198->GetYaxis()->SetTitleFont(42);
   Graph_Graph01198->GetZaxis()->SetLabelFont(42);
   Graph_Graph01198->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01198->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01198);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
