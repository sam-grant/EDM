void S12_AEDM_vs_p_test_noQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sat Mar 20 17:27:50 2021) by ROOT version 6.22/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-437.9375,-0.7237315,3941.438,3.586414);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1032[7] = {
   250,
   750,
   1250,
   1750,
   2250,
   2750,
   3250};
   Double_t Graph0_fy1032[7] = {
   0.07062191,
   0.1923325,
   0.1795611,
   0.1543088,
   0.1169691,
   0.1155135,
   2.572133};
   Double_t Graph0_fex1032[7] = {
   250,
   250,
   250,
   250,
   250,
   250,
   250};
   Double_t Graph0_fey1032[7] = {
   0.07599577,
   0.0251283,
   0.01914643,
   0.01630518,
   0.01542563,
   0.01811372,
   0.2959236};
   TGraphErrors *gre = new TGraphErrors(7,Graph0_fx1032,Graph0_fy1032,Graph0_fex1032,Graph0_fey1032);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01032 = new TH1F("Graph_Graph01032","S12",100,0,3850);
   Graph_Graph01032->SetMinimum(-0.2927169);
   Graph_Graph01032->SetMaximum(3.1554);
   Graph_Graph01032->SetDirectory(0);
   Graph_Graph01032->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01032->SetLineColor(ci);
   Graph_Graph01032->GetXaxis()->SetTitle("p [MeV]: in range p #minus 50 < p < p #plus 50 MeV");
   Graph_Graph01032->GetXaxis()->SetRange(1,91);
   Graph_Graph01032->GetXaxis()->CenterTitle(true);
   Graph_Graph01032->GetXaxis()->SetLabelFont(42);
   Graph_Graph01032->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01032->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01032->GetXaxis()->SetTitleFont(42);
   Graph_Graph01032->GetYaxis()->SetTitle("A_{EDM} [mrad]");
   Graph_Graph01032->GetYaxis()->CenterTitle(true);
   Graph_Graph01032->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01032->GetYaxis()->SetLabelFont(42);
   Graph_Graph01032->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01032->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01032->GetYaxis()->SetTitleFont(42);
   Graph_Graph01032->GetZaxis()->SetLabelFont(42);
   Graph_Graph01032->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01032->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01032);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
