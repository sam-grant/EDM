void S12S18_pureBz_c_vs_p_slice_eQ_2()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May  6 12:22:47 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-410,-3.446141,3690,0.6851466);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1295[14] = {
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
   Double_t Graph0_fy1295[14] = {
   -2.680444,
   -1.493436,
   -0.5397869,
   -0.3590096,
   -0.2734893,
   -0.2285422,
   -0.1831723,
   -0.147878,
   -0.1218425,
   -0.09319532,
   -0.0746783,
   -0.05614879,
   -0.06477614,
   -0.02544569};
   Double_t Graph0_fex1295[14] = {
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
   Double_t Graph0_fey1295[14] = {
   0.07714915,
   0.0273522,
   0.02048251,
   0.017863,
   0.01614503,
   0.01481688,
   0.01382267,
   0.01307167,
   0.01268137,
   0.01251053,
   0.0125793,
   0.01304286,
   0.01425517,
   0.02204437};
   TGraphErrors *gre = new TGraphErrors(14,Graph0_fx1295,Graph0_fy1295,Graph0_fex1295,Graph0_fey1295);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01295 = new TH1F("Graph_Graph01295","S12S18",100,0,3280);
   Graph_Graph01295->SetMinimum(-3.033012);
   Graph_Graph01295->SetMaximum(0.2720179);
   Graph_Graph01295->SetDirectory(0);
   Graph_Graph01295->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01295->SetLineColor(ci);
   Graph_Graph01295->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01295->GetXaxis()->CenterTitle(true);
   Graph_Graph01295->GetXaxis()->SetLabelFont(42);
   Graph_Graph01295->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01295->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01295->GetXaxis()->SetTitleFont(42);
   Graph_Graph01295->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01295->GetYaxis()->CenterTitle(true);
   Graph_Graph01295->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01295->GetYaxis()->SetLabelFont(42);
   Graph_Graph01295->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01295->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01295->GetYaxis()->SetTitleFont(42);
   Graph_Graph01295->GetZaxis()->SetLabelFont(42);
   Graph_Graph01295->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01295->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01295);
   
   gre->Draw("ap");
   
   TPaveText *pt = new TPaveText(0.4253015,0.94,0.5746985,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
