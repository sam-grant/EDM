void S12_N_vs_p_trackReco_WORLD_250MeV_BQ_0()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec  8 12:48:40 2021) by ROOT version 6.24/04
   TCanvas *c = new TCanvas("c", "c",0,0,800,600);
   c->SetHighLightColor(2);
   c->Range(-167.7285,-749731.4,3407.245,1060781);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1103[11] = {
   451.6071,
   653.3642,
   880.2183,
   1123.039,
   1371.147,
   1620.261,
   1866.732,
   2114.885,
   2362.567,
   2614.236,
   2787.767};
   Double_t Graph0_fy1103[11] = {
   55426,
   335701,
   690586,
   733647,
   645707,
   526639,
   386100,
   246784,
   144329,
   90573,
   10888};
   Double_t Graph0_fex1103[11] = {
   0.1407973,
   0.1187308,
   0.08605139,
   0.08406349,
   0.08952839,
   0.09891721,
   0.1153197,
   0.1443421,
   0.1883724,
   0.231567,
   0.2840143};
   Double_t Graph0_fey1103[11] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphErrors *gre = new TGraphErrors(11,Graph0_fx1103,Graph0_fy1103,Graph0_fex1103,Graph0_fey1103);
   gre->SetName("Graph0");
   gre->SetTitle("S12_");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_Graph01103 = new TH1F("Graph_Graph01103","S12_",100,217.8079,3021.709);
   Graph_Graph01103->SetMinimum(-568680.2);
   Graph_Graph01103->SetMaximum(879729.7);
   Graph_Graph01103->SetDirectory(0);
   Graph_Graph01103->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01103->SetLineColor(ci);
   Graph_Graph01103->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_Graph01103->GetXaxis()->SetRange(0,101);
   Graph_Graph01103->GetXaxis()->CenterTitle(true);
   Graph_Graph01103->GetXaxis()->SetLabelFont(42);
   Graph_Graph01103->GetXaxis()->SetTitleSize(0.04);
   Graph_Graph01103->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph01103->GetXaxis()->SetTitleFont(42);
   Graph_Graph01103->GetYaxis()->SetTitle("Positrons / 250 MeV");
   Graph_Graph01103->GetYaxis()->CenterTitle(true);
   Graph_Graph01103->GetYaxis()->SetNdivisions(4000510);
   Graph_Graph01103->GetYaxis()->SetLabelFont(42);
   Graph_Graph01103->GetYaxis()->SetTitleSize(0.04);
   Graph_Graph01103->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph01103->GetYaxis()->SetTitleFont(42);
   Graph_Graph01103->GetZaxis()->SetLabelFont(42);
   Graph_Graph01103->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01103->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01103);
   
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
