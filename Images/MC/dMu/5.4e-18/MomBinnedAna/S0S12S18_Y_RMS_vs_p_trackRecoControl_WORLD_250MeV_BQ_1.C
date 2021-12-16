void S0S12S18_Y_RMS_vs_p_trackRecoControl_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec 14 16:33:32 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-166.8117,9.082703,3411.006,19.38508);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1212[11] = {
   453.0398,
   656.5924,
   884.5957,
   1123.442,
   1363.52,
   1601.454,
   1825.241,
   2101.269,
   2412.694,
   2638.456,
   2791.046};
   Double_t Graph0_fy1212[11] = {
   13.88157,
   13.36109,
   13.1849,
   13.14673,
   13.10702,
   13.09467,
   13.08395,
   12.9119,
   12.6408,
   12.65254,
   12.73906};
   Double_t Graph0_fex1212[11] = {
   0.1640812,
   0.1223072,
   0.08217014,
   0.07557413,
   0.08717204,
   0.1240236,
   0.2569384,
   1.477005,
   0.5957302,
   0.3195425,
   0.272602};
   Double_t Graph0_fey1212[11] = {
   0.04917106,
   0.01705978,
   0.01077568,
   0.009796724,
   0.01135277,
   0.01673588,
   0.03943419,
   0.1622118,
   0.0814671,
   0.04189997,
   0.07881961};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1212,Graph0_fy1212,Graph0_fex1212,Graph0_fey1212);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01212 = new TH1F("Graph_Graph01212","S0S12S18_",100,219.0314,3025.163);
   Graph_Graph01212->SetMinimum(10.11294);
   Graph_Graph01212->SetMaximum(18.35484);
   Graph_Graph01212->SetDirectory(0);
   Graph_Graph01212->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01212->SetLineColor(ci);
   Graph_Graph01212->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01212->GetXaxis()->SetRange(0,101);
   Graph_Graph01212->GetXaxis()->CenterTitle(true);
   Graph_Graph01212->GetXaxis()->SetLabelFont(42);
   Graph_Graph01212->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01212->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01212->GetXaxis()->SetTitleFont(42);
   Graph_Graph01212->GetYaxis()->SetTitle("#sigma_{y} [mm] / 250 MeV");
   Graph_Graph01212->GetYaxis()->CenterTitle(true);
   Graph_Graph01212->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01212->GetYaxis()->SetLabelFont(42);
   Graph_Graph01212->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01212->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01212->GetYaxis()->SetTitleFont(42);
   Graph_Graph01212->GetZaxis()->SetLabelFont(42);
   Graph_Graph01212->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01212->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01212);
   
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
