void S18_AEDMOverMaxDiff_vs_p_trackReco_WORLD_250MeV_BQ_1()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Mar 21 12:27:24 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.0109,-0.006303345,3406.551,0.005517331);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1144[11] = {
   452.0438,
   653.3118,
   880.5354,
   1123.03,
   1370.823,
   1619.719,
   1866.49,
   2115.091,
   2363.256,
   2612.028,
   2787.384};
   Double_t Graph0_fy1144[11] = {
   -0.0005584724,
   0.0008897543,
   0.0008227811,
   0.000865534,
   0.001212085,
   0.001317634,
   0.001660129,
   0.00126208,
   0.001705168,
   0.0036284,
   0.0007354687};
   Double_t Graph0_fex1144[11] = {
   0.1043829,
   0.08798881,
   0.06344013,
   0.06190484,
   0.06643831,
   0.07361715,
   0.08681153,
   0.1090561,
   0.1434491,
   0.1715341,
   0.2167872};
   Double_t Graph0_fey1144[11] = {
   -0.0007768676,
   0.0002924636,
   0.0001622303,
   0.0001941827,
   0.0001780645,
   0.000183211,
   0.0002516969,
   0.0003134844,
   0.0004012565,
   0.0005725498,
   0.001918527};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1144,Graph0_fy1144,Graph0_fex1144,Graph0_fey1144);
   gre->SetName("Graph0");
   gre->SetTitle("S18_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01144 = new TH1F("Graph_Graph01144","S18_",100,218.3733,3021.167);
   Graph_Graph01144->SetMinimum(-0.005121277);
   Graph_Graph01144->SetMaximum(0.004335263);
   Graph_Graph01144->SetDirectory(0);
   Graph_Graph01144->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01144->SetLineColor(ci);
   Graph_Graph01144->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01144->GetXaxis()->SetRange(0,101);
   Graph_Graph01144->GetXaxis()->CenterTitle(true);
   Graph_Graph01144->GetXaxis()->SetLabelFont(42);
   Graph_Graph01144->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01144->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01144->GetXaxis()->SetTitleFont(42);
   Graph_Graph01144->GetYaxis()->SetTitle("A_{EDM}/(#Delta#theta_{y})_{MAX} / 250 MeV");
   Graph_Graph01144->GetYaxis()->CenterTitle(true);
   Graph_Graph01144->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01144->GetYaxis()->SetLabelFont(42);
   Graph_Graph01144->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01144->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01144->GetYaxis()->SetTitleFont(42);
   Graph_Graph01144->GetZaxis()->SetLabelFont(42);
   Graph_Graph01144->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01144->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01144);
   
   gre->Draw("alp");
   
   TPaveText *pt = new TPaveText(0.4466583,0.9362587,0.5533417,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("S18_");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
