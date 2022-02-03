void S12_Y_RMS_vs_p_trackReco_WORLD_250MeV_BQ.2_1()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Feb  2 11:34:00 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.7352,9.37444,3407.155,16.64536);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1101[11] = {
   451.6049,
   653.2425,
   880.2476,
   1123.096,
   1371.206,
   1620.243,
   1866.857,
   2114.96,
   2362.593,
   2614.235,
   2787.651};
   Double_t Graph0_fy1101[11] = {
   13.0664,
   12.99372,
   12.95128,
   12.87889,
   12.81887,
   12.78744,
   12.74034,
   12.70874,
   12.65365,
   12.64009,
   12.63632};
   Double_t Graph0_fex1101[11] = {
   0.15967,
   0.1343891,
   0.09726887,
   0.09508309,
   0.1012556,
   0.1119375,
   0.1303914,
   0.1631604,
   0.21262,
   0.2621876,
   0.3235261};
   Double_t Graph0_fey1101[11] = {
   0.04442708,
   0.01793375,
   0.01246016,
   0.01202137,
   0.01275552,
   0.01409472,
   0.01638418,
   0.02044316,
   0.02659457,
   0.03356958,
   0.09701322};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1101,Graph0_fy1101,Graph0_fex1101,Graph0_fey1101);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01101 = new TH1F("Graph_Graph01101","S12_",100,217.7923,3021.628);
   Graph_Graph01101->SetMinimum(10.10153);
   Graph_Graph01101->SetMaximum(15.91826);
   Graph_Graph01101->SetDirectory(0);
   Graph_Graph01101->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01101->SetLineColor(ci);
   Graph_Graph01101->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01101->GetXaxis()->SetRange(0,101);
   Graph_Graph01101->GetXaxis()->CenterTitle(true);
   Graph_Graph01101->GetXaxis()->SetLabelFont(42);
   Graph_Graph01101->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01101->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01101->GetXaxis()->SetTitleFont(42);
   Graph_Graph01101->GetYaxis()->SetTitle("#sigma_{y} [mm] / 250 MeV");
   Graph_Graph01101->GetYaxis()->CenterTitle(true);
   Graph_Graph01101->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01101->GetYaxis()->SetLabelFont(42);
   Graph_Graph01101->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01101->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01101->GetYaxis()->SetTitleFont(42);
   Graph_Graph01101->GetZaxis()->SetLabelFont(42);
   Graph_Graph01101->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01101->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01101);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
