void S18_AEDMOverMaxDiff_vs_p_Run-1c_125MeV_BQ()
{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 25 03:48:40 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(496.5135,-0.008087677,3027.918,0.07466569);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1126[22] = {
   367.0045,
   457.2535,
   570.0176,
   694.4762,
   815.6753,
   938.5321,
   1062.883,
   1188.194,
   1312.613,
   1435.703,
   1561.988,
   1685.034,
   1810.507,
   1934.911,
   2060.258,
   2184.767,
   2308.986,
   2433.422,
   2559.657,
   2678,
   2781.642,
   2884.375};
   Double_t Graph0_fy1126[22] = {
   -0.06529087,
   0.002106694,
   0.00200586,
   0.003128586,
   0.002168854,
   0.003057933,
   0.004339331,
   0.00444204,
   0.0001443129,
   0.003027019,
   0.002146937,
   0.004634327,
   0.002809934,
   0.007194462,
   0.007362589,
   0.002494967,
   0.007335375,
   0.001083226,
   0.01234205,
   0.004494609,
   0.01184002,
   0.08839144};
   Double_t Graph0_fex1126[22] = {
   0.2097223,
   0.1053092,
   0.06972444,
   0.04891864,
   0.03964913,
   0.03595118,
   0.03404248,
   0.03309807,
   0.03385311,
   0.03415492,
   0.03687725,
   0.03906116,
   0.04441414,
   0.04877218,
   0.05625241,
   0.06230338,
   0.07240694,
   0.08764619,
   0.1035649,
   0.1204361,
   0.2569884,
   1.230174};
   Double_t Graph0_fey1126[22] = {
   -0.04500823,
   0.004912611,
   0.002788271,
   0.001956278,
   0.001569634,
   0.001410405,
   0.001344247,
   0.001306547,
   0.001322963,
   0.001348662,
   0.001447354,
   0.001544072,
   0.001745104,
   0.001922179,
   0.002201927,
   0.002454958,
   0.002847791,
   0.003442295,
   0.004066974,
   0.005022081,
   0.01413056,
   0.09562243};
   TGraphErrors *gre = new TGraphErrors(22,Graph0_fx1126,Graph0_fy1126,Graph0_fex1126,Graph0_fey1126);
   gre->SetName("Graph0");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01126 = new TH1F("Graph_Graph01126","S18",100,114.9137,3137.486);
   Graph_Graph01126->SetMinimum(0.0001876601);
   Graph_Graph01126->SetMaximum(0.06639035);
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
