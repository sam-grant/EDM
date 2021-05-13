void S12S18_c_vs_p_trackReco_AQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu May 13 01:12:12 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-850,-0.5895221,3650,0.09224423);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1325[15] = {
   0,
   200,
   400,
   600,
   800,
   1000,
   1200,
   1400,
   1600,
   1800,
   2000,
   2200,
   2400,
   2600,
   2800};
   Double_t Graph0_fy1325[15] = {
   -0.4667239,
   -0.4664402,
   -0.4305499,
   -0.2986924,
   -0.2391769,
   -0.2014723,
   -0.1680979,
   -0.1428919,
   -0.1223665,
   -0.1219463,
   -0.1118891,
   -0.09441766,
   -0.06703423,
   -0.08425997,
   -0.05810716};
   Double_t Graph0_fex1325[15] = {
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
   Double_t Graph0_fey1325[15] = {
   0.009170531,
   0.009170452,
   0.009145992,
   0.009017088,
   0.008941119,
   0.009000547,
   0.009210797,
   0.009602947,
   0.01023483,
   0.01117655,
   0.01254292,
   0.01450018,
   0.01725826,
   0.02184891,
   0.03672366};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1325,Graph0_fy1325,Graph0_fex1325,Graph0_fey1325);
   gre->SetName("Graph0");
   gre->SetTitle("S12S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01325 = new TH1F("Graph_Graph01325","S12S18",100,-400,3200);
   Graph_Graph01325->SetMinimum(-0.5213455);
   Graph_Graph01325->SetMaximum(0.02406759);
   Graph_Graph01325->SetDirectory(0);
   Graph_Graph01325->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01325->SetLineColor(ci);
   Graph_Graph01325->GetXaxis()->SetTitle("p_{min} [MeV]");
   Graph_Graph01325->GetXaxis()->CenterTitle(true);
   Graph_Graph01325->GetXaxis()->SetLabelFont(42);
   Graph_Graph01325->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01325->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01325->GetXaxis()->SetTitleFont(42);
   Graph_Graph01325->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01325->GetYaxis()->CenterTitle(true);
   Graph_Graph01325->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01325->GetYaxis()->SetLabelFont(42);
   Graph_Graph01325->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01325->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01325->GetYaxis()->SetTitleFont(42);
   Graph_Graph01325->GetZaxis()->SetLabelFont(42);
   Graph_Graph01325->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01325->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01325);
   
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
