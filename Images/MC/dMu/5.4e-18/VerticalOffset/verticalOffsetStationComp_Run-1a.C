void verticalOffsetStationComp_Run-1a()
{
//=========Macro generated from canvas: c/
//=========  (Tue Apr  5 15:49:43 2022) by ROOT version 6.24/06
   TCanvas *c = new TCanvas("c", "",0,0,800,600);
   c->Range(470.8546,-1.25,3018.168,1.25);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t S12_c_vs_p_fx1011[11] = {
   455.8948,
   656.0632,
   884.3183,
   1127.644,
   1373.563,
   1620.325,
   1867.212,
   2116.298,
   2359.992,
   2607.574,
   2781.732};
   Double_t S12_c_vs_p_fy1011[11] = {
   0.2807371,
   -0.04579696,
   -0.0009599669,
   7.403421e-05,
   0.0002271997,
   0.0003816328,
   0.0004679122,
   -0.00373887,
   -0.001290178,
   -0.01229509,
   0.08607151};
   Double_t S12_c_vs_p_fex1011[11] = {
   0.1612216,
   0.1117597,
   0.07355508,
   0.06671218,
   0.06510647,
   0.07171005,
   0.08614684,
   0.1078021,
   0.1395437,
   0.1943605,
   0.3152937};
   Double_t S12_c_vs_p_fey1011[11] = {
   0.1616302,
   0.04054318,
   0.02036216,
   0.01543605,
   0.01332275,
   0.01272854,
   0.01295232,
   0.01374286,
   0.01527604,
   0.01809604,
   0.06899301};
   TGraphErrors *gre = new TGraphErrors(11,S12_c_vs_p_fx1011,S12_c_vs_p_fy1011,S12_c_vs_p_fex1011,S12_c_vs_p_fey1011);
   gre->SetName("S12_c_vs_p");
   gre->SetTitle("Run-1a");
   gre->SetFillStyle(1000);
   gre->SetMarkerStyle(20);
   
   TH1F *Graph_S12_c_vs_p1011 = new TH1F("Graph_S12_c_vs_p1011","Run-1a",100,223.1022,3014.678);
   Graph_S12_c_vs_p1011->SetMinimum(-1);
   Graph_S12_c_vs_p1011->SetMaximum(1);
   Graph_S12_c_vs_p1011->SetDirectory(0);
   Graph_S12_c_vs_p1011->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_S12_c_vs_p1011->SetLineColor(ci);
   Graph_S12_c_vs_p1011->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S12_c_vs_p1011->GetXaxis()->SetRange(19,91);
   Graph_S12_c_vs_p1011->GetXaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1011->GetXaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1011->GetXaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1011->GetXaxis()->SetTitleOffset(1.1);
   Graph_S12_c_vs_p1011->GetXaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1011->GetYaxis()->SetTitle("#LT#theta_{y}#GT [mrad] / 250 MeV");
   Graph_S12_c_vs_p1011->GetYaxis()->CenterTitle(true);
   Graph_S12_c_vs_p1011->GetYaxis()->SetNdivisions(4000510);
   Graph_S12_c_vs_p1011->GetYaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1011->GetYaxis()->SetTitleSize(0.04);
   Graph_S12_c_vs_p1011->GetYaxis()->SetTitleOffset(1.15);
   Graph_S12_c_vs_p1011->GetYaxis()->SetTitleFont(42);
   Graph_S12_c_vs_p1011->GetZaxis()->SetLabelFont(42);
   Graph_S12_c_vs_p1011->GetZaxis()->SetTitleOffset(1);
   Graph_S12_c_vs_p1011->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S12_c_vs_p1011);
   
   gre->Draw("apl");
   
   Double_t S18_c_vs_p_fx1012[11] = {
   456.1582,
   653.9005,
   883.5294,
   1127.34,
   1373.07,
   1619.549,
   1866.691,
   2115.977,
   2359.683,
   2607.205,
   2781.75};
   Double_t S18_c_vs_p_fy1012[11] = {
   -0.1204791,
   -0.004864636,
   0.01183821,
   -0.002729332,
   -0.0004029939,
   0.004977177,
   -0.004840869,
   -7.59123e-05,
   0.01447085,
   0.02795422,
   0.02641959};
   Double_t S18_c_vs_p_fex1012[11] = {
   0.1558516,
   0.1097482,
   0.07461565,
   0.06792102,
   0.06754761,
   0.07503672,
   0.09225336,
   0.1164617,
   0.154189,
   0.2106078,
   0.3609038};
   Double_t S18_c_vs_p_fey1012[11] = {
   0.1538089,
   0.03944654,
   0.02048108,
   0.01563354,
   0.01372798,
   0.01326115,
   0.01378123,
   0.01490292,
   0.01673832,
   0.01964311,
   0.07488665};
   gre = new TGraphErrors(11,S18_c_vs_p_fx1012,S18_c_vs_p_fy1012,S18_c_vs_p_fex1012,S18_c_vs_p_fey1012);
   gre->SetName("S18_c_vs_p");
   gre->SetTitle("S18");
   gre->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   gre->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_S18_c_vs_p1012 = new TH1F("Graph_S18_c_vs_p1012","S18",100,223.3915,3014.722);
   Graph_S18_c_vs_p1012->SetMinimum(-0.005716113);
   Graph_S18_c_vs_p1012->SetMaximum(0.03351558);
   Graph_S18_c_vs_p1012->SetDirectory(0);
   Graph_S18_c_vs_p1012->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_S18_c_vs_p1012->SetLineColor(ci);
   Graph_S18_c_vs_p1012->GetXaxis()->SetTitle("Decay vertex momentum [MeV]");
   Graph_S18_c_vs_p1012->GetXaxis()->SetRange(19,91);
   Graph_S18_c_vs_p1012->GetXaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1012->GetXaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1012->GetXaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1012->GetXaxis()->SetTitleOffset(1.1);
   Graph_S18_c_vs_p1012->GetXaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1012->GetYaxis()->SetTitle("c [mrad] / 250 MeV");
   Graph_S18_c_vs_p1012->GetYaxis()->CenterTitle(true);
   Graph_S18_c_vs_p1012->GetYaxis()->SetNdivisions(4000510);
   Graph_S18_c_vs_p1012->GetYaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1012->GetYaxis()->SetTitleSize(0.04);
   Graph_S18_c_vs_p1012->GetYaxis()->SetTitleOffset(1.2);
   Graph_S18_c_vs_p1012->GetYaxis()->SetTitleFont(42);
   Graph_S18_c_vs_p1012->GetZaxis()->SetLabelFont(42);
   Graph_S18_c_vs_p1012->GetZaxis()->SetTitleOffset(1);
   Graph_S18_c_vs_p1012->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_S18_c_vs_p1012);
   
   gre->Draw("pl ");
   
   TLegend *leg = new TLegend(0.15,0.75,0.89,0.89,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(44);
   leg->SetTextSize(24);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("S12_c_vs_p","Station 12","lpf");
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   entry=leg->AddEntry("S18_c_vs_p","Station 18","lpf");
   entry->SetFillStyle(1000);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(44);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.4284422,0.94,0.5715578,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("Run-1a");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
