void S0S12S18_Y_RMS_vs_p_trackReco_WORLD_500MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Feb  7 15:00:20 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-126.9879,9.180819,3212.571,16.50272);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1162[6] = {
   451.5331,
   805.4564,
   1238.744,
   1725.082,
   2208.043,
   2633.959};
   Double_t Graph0_fy1162[6] = {
   13.03736,
   12.97015,
   12.85022,
   12.75099,
   12.69932,
   12.56966};
   Double_t Graph0_fex1162[6] = {
   0.1005982,
   0.09083834,
   0.08817913,
   0.1077158,
   0.1604039,
   0.1922119};
   Double_t Graph0_fey1162[6] = {
   0.0280799,
   0.006512115,
   0.005599377,
   0.006858369,
   0.0103095,
   0.01981222};
   TGraphErrors *gre = new TGraphErrors(6,Graph0_fx1162,Graph0_fy1162,Graph0_fex1162,Graph0_fey1162);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01162 = new TH1F("Graph_Graph01162","S0S12S18_",100,233.1606,2852.423);
   Graph_Graph01162->SetMinimum(9.913008);
   Graph_Graph01162->SetMaximum(15.77053);
   Graph_Graph01162->SetDirectory(0);
   Graph_Graph01162->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01162->SetLineColor(ci);
   Graph_Graph01162->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01162->GetXaxis()->SetRange(0,101);
   Graph_Graph01162->GetXaxis()->CenterTitle(true);
   Graph_Graph01162->GetXaxis()->SetLabelFont(42);
   Graph_Graph01162->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01162->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01162->GetXaxis()->SetTitleFont(42);
   Graph_Graph01162->GetYaxis()->SetTitle("#sigma_{y} [mm] / 500 MeV");
   Graph_Graph01162->GetYaxis()->CenterTitle(true);
   Graph_Graph01162->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01162->GetYaxis()->SetLabelFont(42);
   Graph_Graph01162->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01162->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01162->GetYaxis()->SetTitleFont(42);
   Graph_Graph01162->GetZaxis()->SetLabelFont(42);
   Graph_Graph01162->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01162->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01162);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.3920101,0.9362587,0.6079899,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S0S12S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
