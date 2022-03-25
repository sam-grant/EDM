void S18_thetaYMaxDiff_vs_p_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 02:59:10 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-163.4976,-10.53945,3375.031,199.8137);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1143[11] = {
   452.0477,
   653.2775,
   880.5348,
   1123.042,
   1370.867,
   1619.751,
   1866.475,
   2115.067,
   2363.258,
   2612.125,
   2787.408};
   Double_t Graph0_fy1143[11] = {
   164.2341,
   145.4539,
   149.8728,
   106.4207,
   103.4748,
   96.11006,
   71.43813,
   60.391,
   51.55329,
   36.0873,
   25.04017};
   Double_t Graph0_fex1143[11] = {
   0.09825481,
   0.08285797,
   0.05975239,
   0.05830994,
   0.06253833,
   0.06928603,
   0.08176643,
   0.1027071,
   0.1350528,
   0.1614991,
   0.2033584};
   Double_t Graph0_fey1143[11] = {
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
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1143,Graph0_fy1143,Graph0_fex1143,Graph0_fey1143);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01143 = new TH1F("Graph_Graph01143","S18_",100,218.3832,3021.178);
   Graph_Graph01143->SetMinimum(10.49586);
   Graph_Graph01143->SetMaximum(178.7784);
   Graph_Graph01143->SetDirectory(0);
   Graph_Graph01143->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01143->SetLineColor(ci);
   Graph_Graph01143->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01143->GetXaxis()->SetRange(0,100);
   Graph_Graph01143->GetXaxis()->CenterTitle(true);
   Graph_Graph01143->GetXaxis()->SetLabelFont(42);
   Graph_Graph01143->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01143->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01143->GetXaxis()->SetTitleFont(42);
   Graph_Graph01143->GetYaxis()->SetTitle("(#Delta#theta_{y})_{MAX} [mrad] / 250 MeV");
   Graph_Graph01143->GetYaxis()->CenterTitle(true);
   Graph_Graph01143->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01143->GetYaxis()->SetLabelFont(42);
   Graph_Graph01143->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01143->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01143->GetYaxis()->SetTitleFont(42);
   Graph_Graph01143->GetZaxis()->SetLabelFont(42);
   Graph_Graph01143->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01143->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01143);
   
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
