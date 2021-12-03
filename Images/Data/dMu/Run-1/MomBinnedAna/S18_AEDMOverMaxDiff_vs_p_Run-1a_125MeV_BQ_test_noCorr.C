void S18_AEDMOverMaxDiff_vs_p_Run-1a_125MeV_BQ_test_noCorr()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 13:52:06 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(491.3947,-0.03362709,3023.315,0.0675496);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1038[22] = {
   363.6742,
   456.9233,
   570.967,
   695.2657,
   815.5224,
   938.5771,
   1061.925,
   1188.005,
   1312.76,
   1436.187,
   1562.16,
   1685.106,
   1809.264,
   1935.72,
   2061.24,
   2185.339,
   2308.766,
   2432.082,
   2557.212,
   2678.382,
   2781.661,
   2879.577};
   Double_t Graph0_fy1038[22] = {
   0.7896574,
   -0.02263848,
   -0.09412757,
   0.04158138,
   -0.01400166,
   -0.02612631,
   0.01489756,
   -0.01713125,
   0.02664914,
   -0.03091399,
   0.01954255,
   0.005883876,
   0.01942758,
   -0.02012032,
   0.02133452,
   0.0309952,
   -0.01308072,
   0.04890657,
   0.03140601,
   -0.007510041,
   0.03137946,
   -1.390553};
   Double_t Graph0_fex1038[22] = {
   2.024653,
   1.162748,
   0.839956,
   0.5830775,
   0.4782164,
   0.4268731,
   0.4104285,
   0.3959997,
   0.3957923,
   0.4014006,
   0.4393616,
   0.4715054,
   0.5277951,
   0.5765813,
   0.6515722,
   0.7132642,
   0.8283014,
   1.013706,
   1.241928,
   1.421088,
   3.295854,
   1.395883};
   Double_t Graph0_fey1038[22] = {
   0.6306458,
   -0.05425891,
   -0.03283736,
   0.02342036,
   -0.01920581,
   -0.01664787,
   0.01615332,
   -0.01578617,
   0.01548027,
   -0.01591165,
   0.01679271,
   0.01828643,
   0.02033436,
   -0.02258451,
   0.02567516,
   0.02830717,
   -0.03210328,
   0.03810808,
   0.04572473,
   -0.05432535,
   0.09267192,
   -1.25971};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1038,Graph0_fy1038,Graph0_fex1038,Graph0_fey1038);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01038 = new TH1F("Graph_Graph01038","S18",100,109.7171,3132.906);
   Graph_Graph01038->SetMinimum(-0.02350942);
   Graph_Graph01038->SetMaximum(0.05743193);
   Graph_Graph01038->SetDirectory(0);
   Graph_Graph01038->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01038->SetLineColor(ci);
   Graph_Graph01038->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01038->GetXaxis()->SetRange(22,88);
   Graph_Graph01038->GetXaxis()->CenterTitle(true);
   Graph_Graph01038->GetXaxis()->SetLabelFont(42);
   Graph_Graph01038->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01038->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01038->GetXaxis()->SetTitleFont(42);
   Graph_Graph01038->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 125 MeV");
   Graph_Graph01038->GetYaxis()->CenterTitle(true);
   Graph_Graph01038->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01038->GetYaxis()->SetLabelFont(42);
   Graph_Graph01038->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01038->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01038->GetYaxis()->SetTitleFont(42);
   Graph_Graph01038->GetZaxis()->SetLabelFont(42);
   Graph_Graph01038->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01038->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01038);
   
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
