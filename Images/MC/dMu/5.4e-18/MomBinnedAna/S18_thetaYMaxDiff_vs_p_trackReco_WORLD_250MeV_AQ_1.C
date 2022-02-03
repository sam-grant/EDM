void S18_thetaYMaxDiff_vs_p_trackReco_WORLD_250MeV_AQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jan 19 10:50:33 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-389.9195,125.5021,3509.275,231.0562);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1149[12] = {
   193.627,
   428.7209,
   630.9542,
   875.1418,
   1123.931,
   1373.172,
   1622.294,
   1870.639,
   2119.126,
   2366.724,
   2612.58,
   2825.157};
   Double_t Graph0_fy1149[12] = {
   183.7507,
   183.7507,
   183.7507,
   183.7507,
   183.7507,
   183.7507,
   183.7507,
   183.7507,
   183.3824,
   183.7507,
   183.7507,
   178.9636};
   Double_t Graph0_fex1149[12] = {
   0.3451501,
   0.06002813,
   0.04658121,
   0.04479511,
   0.0455383,
   0.04707298,
   0.04959316,
   0.05382871,
   0.06066495,
   0.07154502,
   0.09069372,
   0.1153877};
   Double_t Graph0_fey1149[12] = {
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669,
   0.5207669};
   TGraphErrors *gre = new TGraphErrors(12,Graph0_fx1149,Graph0_fy1149,Graph0_fex1149,Graph0_fey1149);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01149 = new TH1F("Graph_Graph01149","S18_",100,0,3088.471);
   Graph_Graph01149->SetMinimum(136.0576);
   Graph_Graph01149->SetMaximum(220.5008);
   Graph_Graph01149->SetDirectory(0);
   Graph_Graph01149->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01149->SetLineColor(ci);
   Graph_Graph01149->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01149->GetXaxis()->SetRange(1,101);
   Graph_Graph01149->GetXaxis()->CenterTitle(true);
   Graph_Graph01149->GetXaxis()->SetLabelFont(42);
   Graph_Graph01149->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01149->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01149->GetXaxis()->SetTitleFont(42);
   Graph_Graph01149->GetYaxis()->SetTitle("(#Delta#theta_{y})_{MAX} [mrad] / 250 MeV");
   Graph_Graph01149->GetYaxis()->CenterTitle(true);
   Graph_Graph01149->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01149->GetYaxis()->SetLabelFont(42);
   Graph_Graph01149->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01149->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01149->GetYaxis()->SetTitleFont(42);
   Graph_Graph01149->GetZaxis()->SetLabelFont(42);
   Graph_Graph01149->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01149->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01149);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
