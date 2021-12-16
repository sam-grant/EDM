void S0S12S18_AEDMOverThetaYRMS_vs_p_trackRecoControl_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Dec 14 16:33:33 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-166.8117,-0.04183713,3411.006,0.076582);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1219[11] = {
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
   Double_t Graph0_fy1219[11] = {
   -0.005530651,
   0.006233833,
   0.004218026,
   0.004945959,
   0.007931038,
   0.008563018,
   0.01470192,
   0.03663917,
   0.007151093,
   0.01042619,
   0.02184633};
   Double_t Graph0_fex1219[11] = {
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
   Double_t Graph0_fey1219[11] = {
   -0.007067149,
   0.002553192,
   0.001633289,
   0.001487889,
   0.001730458,
   0.002550746,
   0.006040023,
   0.02467404,
   0.01291322,
   0.00663785,
   0.01233991};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1219,Graph0_fy1219,Graph0_fex1219,Graph0_fey1219);
   gre->SetName("Graph0");
   gre->SetTitle("S0S12S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01219 = new TH1F("Graph_Graph01219","S0S12S18_",100,219.0314,3025.163);
   Graph_Graph01219->SetMinimum(-0.02999522);
   Graph_Graph01219->SetMaximum(0.06474009);
   Graph_Graph01219->SetDirectory(0);
   Graph_Graph01219->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01219->SetLineColor(ci);
   Graph_Graph01219->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01219->GetXaxis()->SetRange(0,101);
   Graph_Graph01219->GetXaxis()->CenterTitle(true);
   Graph_Graph01219->GetXaxis()->SetLabelFont(42);
   Graph_Graph01219->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01219->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01219->GetXaxis()->SetTitleFont(42);
   Graph_Graph01219->GetYaxis()->SetTitle("A_{EDM}/#sigma#theta_{y} / 250 MeV");
   Graph_Graph01219->GetYaxis()->CenterTitle(true);
   Graph_Graph01219->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01219->GetYaxis()->SetLabelFont(42);
   Graph_Graph01219->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01219->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01219->GetYaxis()->SetTitleFont(42);
   Graph_Graph01219->GetZaxis()->SetLabelFont(42);
   Graph_Graph01219->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01219->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01219);
   
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
