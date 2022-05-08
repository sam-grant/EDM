void S18_theta_Y_RMS_vs_p_Run-1c_250MeV_1000_2500_MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Sun May  8 18:10:10 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(785.2907,2.488595,2704.38,25.33711);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1076[11] = {
   456.247,
   653.5144,
   883.6089,
   1127.304,
   1372.916,
   1619.588,
   1866.593,
   2115.809,
   2359.485,
   2606.429,
   2782.043};
   Double_t Graph0_fy1076[11] = {
   31.05031,
   24.39005,
   19.39661,
   16.62541,
   14.52118,
   12.58125,
   10.67726,
   9.000956,
   7.398735,
   5.864756,
   4.950928};
   Double_t Graph0_fex1076[11] = {
   0.1091934,
   0.07732065,
   0.05250078,
   0.04772049,
   0.04755709,
   0.05301721,
   0.06529801,
   0.08285997,
   0.1099856,
   0.1514908,
   0.2639107};
   Double_t Graph0_fey1076[11] = {
   0.07593193,
   0.01950606,
   0.01015895,
   0.007771191,
   0.006846814,
   0.006626955,
   0.006883902,
   0.007359993,
   0.008113867,
   0.009279398,
   0.03500135};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1076,Graph0_fy1076,Graph0_fex1076,Graph0_fey1076);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01076 = new TH1F("Graph_Graph01076","S18",100,223.5209,3014.924);
   Graph_Graph01076->SetMinimum(4.773447);
   Graph_Graph01076->SetMaximum(23.05226);
   Graph_Graph01076->SetDirectory(0);
   Graph_Graph01076->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01076->SetLineColor(ci);
   Graph_Graph01076->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01076->GetXaxis()->SetRange(28,82);
   Graph_Graph01076->GetXaxis()->CenterTitle(true);
   Graph_Graph01076->GetXaxis()->SetLabelFont(42);
   Graph_Graph01076->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01076->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01076->GetXaxis()->SetTitleFont(42);
   Graph_Graph01076->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 250 MeV");
   Graph_Graph01076->GetYaxis()->CenterTitle(true);
   Graph_Graph01076->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01076->GetYaxis()->SetLabelFont(42);
   Graph_Graph01076->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01076->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01076->GetYaxis()->SetTitleFont(42);
   Graph_Graph01076->GetZaxis()->SetLabelFont(42);
   Graph_Graph01076->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01076->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01076);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
