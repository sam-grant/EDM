void S12S18_Ag2_vs_p_trackTruth_WORLD_250MeV_AQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Nov 18 11:37:24 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(521.7914,-1.539568,2724.911,7.034977);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1057[12] = {
   200.6111,
   433.374,
   628.5495,
   873.0428,
   1121.663,
   1371.534,
   1620.158,
   1868.05,
   2116.157,
   2363.194,
   2613.861,
   2828.937};
   Double_t Graph0_fy1057[12] = {
   4.2967,
   -0.06130334,
   0.01468714,
   -0.0445571,
   -0.01112259,
   0.008329682,
   -0.01048496,
   -0.001925347,
   0.02200564,
   -0.0008594038,
   0.0321265,
   -0.03563674};
   Double_t Graph0_fex1057[12] = {
   1.388079,
   0.04915309,
   0.04491321,
   0.04516026,
   0.04846634,
   0.05235025,
   0.05760542,
   0.06610922,
   0.07949562,
   0.1016833,
   0.1330492,
   0.1714185};
   Double_t Graph0_fey1057[12] = {
   1.309185,
   0.04917403,
   0.02466125,
   0.02022825,
   0.01821713,
   0.0167626,
   0.01589977,
   0.01571979,
   0.01621946,
   0.01761795,
   0.01891778,
   0.02441772};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1057,Graph0_fy1057,Graph0_fex1057,Graph0_fey1057);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01057 = new TH1F("Graph_Graph01057","S12S18_",100,0,3092.097);
   Graph_Graph01057->SetMinimum(-0.6821137);
   Graph_Graph01057->SetMaximum(6.177522);
   Graph_Graph01057->SetDirectory(0);
   Graph_Graph01057->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01057->SetLineColor(ci);
   Graph_Graph01057->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01057->GetXaxis()->SetRange(25,81);
   Graph_Graph01057->GetXaxis()->CenterTitle(true);
   Graph_Graph01057->GetXaxis()->SetLabelFont(42);
   Graph_Graph01057->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01057->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01057->GetXaxis()->SetTitleFont(42);
   Graph_Graph01057->GetYaxis()->SetTitle("A_{g#minus2} [mrad]");
   Graph_Graph01057->GetYaxis()->CenterTitle(true);
   Graph_Graph01057->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01057->GetYaxis()->SetLabelFont(42);
   Graph_Graph01057->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01057->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01057->GetYaxis()->SetTitleFont(42);
   Graph_Graph01057->GetZaxis()->SetLabelFont(42);
   Graph_Graph01057->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01057->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01057);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4146231,0.9362587,0.5853769,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
