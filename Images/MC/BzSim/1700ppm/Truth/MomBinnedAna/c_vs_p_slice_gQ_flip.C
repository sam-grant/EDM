void c_vs_p_slice_gQ_flip()
{
//=========Macro generated from canvas: c/c
//=========  (Fri May  7 13:51:30 2021) by ROOT version 6.22/08
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   gStyle->SetOptStat(0);
   c->SetHighLightColor(2);
   c->Range(-412.5,-0.1940621,3712.5,0.1021493);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1035[15] = {
   100,
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
   Double_t Graph0_fy1035[15] = {
   -0.05887217,
   -0.1295737,
   -0.1075861,
   -0.09142038,
   -0.0440119,
   -0.03387925,
   -0.02112504,
   -0.008321369,
   0.006256187,
   0.02144015,
   0.02541556,
   0.035024,
   0.04343768,
   0.04825746,
   0.03433882};
   Double_t Graph0_fex1035[15] = {
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
   Double_t Graph0_fey1035[15] = {
   0.02346145,
   0.01511982,
   0.0115879,
   0.009512755,
   0.007824967,
   0.006721266,
   0.005980552,
   0.005410752,
   0.004972883,
   0.004693109,
   0.004505025,
   0.004413432,
   0.004388793,
   0.004523277,
   0.005027968};
   TGraphErrors *gre = new TGraphErrors(15,Graph0_fx1035,Graph0_fy1035,Graph0_fex1035,Graph0_fey1035);
   gre->SetName("Graph0");
   gre->SetTitle(";p [MeV]: in range p #minus 100 < p < p #plus 100 MeV;c [mrad]");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01035 = new TH1F("Graph_Graph01035","",100,0,3300);
   Graph_Graph01035->SetMinimum(-0.164441);
   Graph_Graph01035->SetMaximum(0.07252817);
   Graph_Graph01035->SetDirectory(0);
   Graph_Graph01035->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01035->SetLineColor(ci);
   Graph_Graph01035->GetXaxis()->SetTitle("p [MeV]: in range p #minus 100 < p < p #plus 100 MeV");
   Graph_Graph01035->GetXaxis()->CenterTitle(true);
   Graph_Graph01035->GetXaxis()->SetLabelFont(42);
   Graph_Graph01035->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01035->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01035->GetXaxis()->SetTitleFont(42);
   Graph_Graph01035->GetYaxis()->SetTitle("c [mrad]");
   Graph_Graph01035->GetYaxis()->CenterTitle(true);
   Graph_Graph01035->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01035->GetYaxis()->SetLabelFont(42);
   Graph_Graph01035->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01035->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01035->GetYaxis()->SetTitleFont(42);
   Graph_Graph01035->GetZaxis()->SetLabelFont(42);
   Graph_Graph01035->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01035->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01035);
   
   gre->Draw("ap");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
