void S12_theta_Y_RMS_vs_p_Run-1a_125MeV_BQ_test()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 13:46:37 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(485.1431,2.073939,3016.181,31.10315);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1021[21] = {
   372.4235,
   456.1787,
   569.87,
   695.8091,
   815.8418,
   938.8441,
   1062.299,
   1188.5,
   1313.017,
   1435.605,
   1561.235,
   1685.671,
   1810.509,
   1935.081,
   2060.699,
   2185.29,
   2309.013,
   2433.545,
   2560.565,
   2678.061,
   2780.05};
   Double_t Graph0_fy1021[21] = {
   16.68621,
   31.54111,
   27.63451,
   23.60583,
   20.57994,
   18.80534,
   17.3269,
   16.13966,
   15.00741,
   14.04972,
   13.24886,
   12.01057,
   11.13745,
   10.12866,
   9.381437,
   8.685461,
   7.904437,
   6.757453,
   6.117456,
   5.597083,
   5.377879};
   Double_t Graph0_fex1021[21] = {
   0.5744707,
   1.372971,
   0.9209827,
   0.5946061,
   0.4787511,
   0.4270488,
   0.403261,
   0.3854228,
   0.3985205,
   0.3966175,
   0.4212256,
   0.4473419,
   0.4900027,
   0.5441462,
   0.6016588,
   0.691145,
   0.7876235,
   0.9152903,
   1.101754,
   1.277905,
   2.31207};
   Double_t Graph0_fey1021[21] = {
   5.899466,
   0.9866238,
   0.4945785,
   0.2807832,
   0.1940641,
   0.1567874,
   0.1378978,
   0.1236764,
   0.1158399,
   0.1093836,
   0.1103229,
   0.1046894,
   0.1064725,
   0.1071351,
   0.1123223,
   0.116523,
   0.1213342,
   0.1206303,
   0.1354427,
   0.1498025,
   0.3821892};
   TGraphErrors *gre = new TGraphErrors(21,Graph0_fx1021,Graph0_fy1021,Graph0_fex1021,Graph0_fey1021);
   gre->SetName("Graph0");
   gre->SetTitle("S12");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01021 = new TH1F("Graph_Graph01021","S12",100,130.7977,3023.413);
   Graph_Graph01021->SetMinimum(4.97686);
   Graph_Graph01021->SetMaximum(28.20023);
   Graph_Graph01021->SetDirectory(0);
   Graph_Graph01021->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01021->SetLineColor(ci);
   Graph_Graph01021->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01021->GetXaxis()->SetRange(22,91);
   Graph_Graph01021->GetXaxis()->CenterTitle(true);
   Graph_Graph01021->GetXaxis()->SetLabelFont(42);
   Graph_Graph01021->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01021->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01021->GetXaxis()->SetTitleFont(42);
   Graph_Graph01021->GetYaxis()->SetTitle("#sigma#theta_{y} [mrad] / 125 MeV");
   Graph_Graph01021->GetYaxis()->CenterTitle(true);
   Graph_Graph01021->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01021->GetYaxis()->SetLabelFont(42);
   Graph_Graph01021->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01021->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01021->GetYaxis()->SetTitleFont(42);
   Graph_Graph01021->GetZaxis()->SetLabelFont(42);
   Graph_Graph01021->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01021->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01021);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4579648,0.94,0.5420352,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S12");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
