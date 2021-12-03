void S18_AEDMOverMaxDiff_vs_p_Run-1a_125MeV_BQ_test_corr()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Dec  3 13:52:38 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(491.3947,-0.03312803,3023.315,0.0574043);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1038[22] = {
   363.6742,
   456.9233,
   570.967,
   695.2781,
   815.5259,
   938.5837,
   1061.906,
   1188.014,
   1312.777,
   1436.197,
   1562.156,
   1685.12,
   1809.254,
   1935.716,
   2061.228,
   2185.339,
   2308.766,
   2432.082,
   2557.212,
   2678.382,
   2781.661,
   2879.577};
   Double_t Graph0_fy1038[22] = {
   0.7606088,
   -0.004052087,
   -0.09768687,
   0.04256242,
   -0.01524215,
   -0.02417602,
   0.01540295,
   -0.01753427,
   0.02773833,
   -0.03171568,
   0.02201361,
   0.007884798,
   0.01796613,
   -0.02040982,
   0.02296179,
   0.03148527,
   -0.01745964,
   0.03719198,
   0.03854209,
   -0.01919713,
   0.1656558,
   -1.394482};
   Double_t Graph0_fex1038[22] = {
   2.024653,
   1.162748,
   0.839956,
   0.582615,
   0.4780578,
   0.4268186,
   0.4103958,
   0.3961116,
   0.3958377,
   0.4013615,
   0.4393997,
   0.4716689,
   0.5278869,
   0.5765577,
   0.6514839,
   0.7132642,
   0.8283014,
   1.013706,
   1.241928,
   1.421088,
   3.295854,
   1.395883};
   Double_t Graph0_fey1038[22] = {
   0.6529531,
   -0.05329425,
   -0.0327301,
   0.02339569,
   -0.01915178,
   -0.01664496,
   0.01612707,
   -0.01575158,
   0.01550759,
   -0.01591894,
   0.01680719,
   0.01827429,
   0.02035961,
   -0.02251895,
   0.02546025,
   0.02823865,
   -0.03222026,
   0.03810443,
   0.04530134,
   -0.05425408,
   0.09279755,
   -1.302846};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1038,Graph0_fy1038,Graph0_fex1038,Graph0_fey1038);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01038 = new TH1F("Graph_Graph01038","S18",100,109.7171,3132.906);
   Graph_Graph01038->SetMinimum(-0.02407479);
   Graph_Graph01038->SetMaximum(0.04835107);
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
