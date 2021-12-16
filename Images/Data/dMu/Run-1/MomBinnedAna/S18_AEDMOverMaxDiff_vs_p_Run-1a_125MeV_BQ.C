void S18_AEDMOverMaxDiff_vs_p_Run-1a_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Dec  9 22:15:42 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.0523,-0.6961463,3028.099,0.09975705);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1126[22] = {
   366.6108,
   457.1028,
   570.2676,
   694.5045,
   815.6442,
   938.5045,
   1062.791,
   1188.168,
   1312.631,
   1435.783,
   1561.985,
   1685.031,
   1810.403,
   1935.07,
   2060.344,
   2184.717,
   2309.137,
   2433.457,
   2559.791,
   2678.02,
   2781.349,
   2884.595};
   Double_t Graph0_fy1126[22] = {
   0.1318273,
   -0.005594296,
   0.0005422263,
   0.002670677,
   0.001784268,
   0.0018536,
   0.004596358,
   0.0008687303,
   0.002001194,
   -0.002830617,
   0.001182963,
   0.001983568,
   0.001638944,
   -0.001810668,
   0.006569346,
   0.004734681,
   -0.0001501523,
   0.003422448,
   0.002719167,
   -0.00206308,
   0.01705523,
   -1.369658};
   Double_t Graph0_fex1126[22] = {
   0.3102122,
   0.1519888,
   0.1005352,
   0.06984739,
   0.05677918,
   0.05154475,
   0.04885287,
   0.04739523,
   0.04842386,
   0.04890634,
   0.05247658,
   0.05577436,
   0.06316181,
   0.06915618,
   0.07965764,
   0.08793112,
   0.1021086,
   0.1237632,
   0.1455347,
   0.1671362,
   0.3532232,
   1.155309};
   Double_t Graph0_fey1126[22] = {
   0.06375693,
   -0.007052364,
   0.004026284,
   0.00280275,
   0.002246726,
   0.002018968,
   0.001928044,
   0.001869968,
   0.00189434,
   -0.001928341,
   0.002060466,
   0.002200598,
   0.002478569,
   -0.002730775,
   0.003127634,
   0.003459015,
   -0.004037799,
   0.004865334,
   0.005703784,
   -0.00695748,
   0.0193574,
   -0.2621537};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1126,Graph0_fy1126,Graph0_fex1126,Graph0_fey1126);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01126 = new TH1F("Graph_Graph01126","S18",100,114.3557,3137.695);
   Graph_Graph01126->SetMinimum(-0.616556);
   Graph_Graph01126->SetMaximum(0.02016671);
   Graph_Graph01126->SetDirectory(0);
   Graph_Graph01126->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01126->SetLineColor(ci);
   Graph_Graph01126->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01126->GetXaxis()->SetRange(22,88);
   Graph_Graph01126->GetXaxis()->CenterTitle(true);
   Graph_Graph01126->GetXaxis()->SetLabelFont(42);
   Graph_Graph01126->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01126->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01126->GetXaxis()->SetTitleFont(42);
   Graph_Graph01126->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 125 MeV");
   Graph_Graph01126->GetYaxis()->CenterTitle(true);
   Graph_Graph01126->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01126->GetYaxis()->SetLabelFont(42);
   Graph_Graph01126->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01126->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01126->GetYaxis()->SetTitleFont(42);
   Graph_Graph01126->GetZaxis()->SetLabelFont(42);
   Graph_Graph01126->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01126->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01126);
   
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
